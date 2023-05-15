#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include "libs/graph.hpp"

/**
 Constructor for a Graph that loads all vertices
 from a file

 @param filepath The path to the file
*/
Graph::Graph(std::string filepath)
{
    int vertex1, vertex2;
    std::ifstream graphfile;
    graphfile.open(filepath);

    if (!graphfile.is_open())
    {
        std::cerr << "File could not be opened" << std::endl;
        exit(1);
    }

    while (!graphfile.eof())
    {
        vertex1 = 0;
        vertex2 = 0;
        graphfile >> vertex1 >> vertex2;
        if (!graphfile.fail())
        {
            this->insertEdge(vertex1, vertex2);
        }
    }
    graphfile.close();
}

/**
 Destructor for a Graph that free all vertices in a Graph
*/
Graph::~Graph()
{
    for (auto &vertex : this->vertices)
    {
        delete vertex.second;
    }
}

/**
 Constructor for creating a Vertex

 @param id The id of the Vertex being created
*/
Graph::Vertex::Vertex(unsigned int id)
{
    this->id = id;
    this->visited = false;
}

/**
 Find a Vertex in a Graph

 @param id Id of the wanted Vertex
 @return Pointer to the Vertex or nullptr if the Vertex doesn't exist
*/
Graph::Vertex *Graph::findVertex(unsigned int id)
{
    if (this->vertices.find(id) != this->vertices.end())
        return this->vertices[id];
    else
        return nullptr;
}

/**
 Inserts an creates a new Vertex inside a Graph

 @param id Id of the Vertex to be created
 @return Pointer to the Vertex
*/
Graph::Vertex *Graph::insertVertex(unsigned int id)
{
    this->vertex_count++;

    Vertex *tmp = new Vertex(id);

    this->vertices[id] = tmp;

    return tmp;
}

/**
 Creates an edge between two vertices in a Graph

 @param id1 The id of the first Vertex
 @param id2 The id of the second Vertex
*/
void Graph::insertEdge(unsigned int id1, unsigned int id2)
{
    this->edge_count++;

    if (id1 == id2)
    {
        Vertex *tmp1 = findVertex(id1);
        if (tmp1 == nullptr)
        {
            tmp1 = insertVertex(id1);
        }

        this->adjacency_list[id1][id2] = tmp1;
        return;
    }

    Vertex *tmp1 = findVertex(id1);
    Vertex *tmp2 = findVertex(id2);

    if (tmp1 == nullptr)
    {
        tmp1 = insertVertex(id1);
    }

    if (tmp2 == nullptr)
    {
        tmp2 = insertVertex(id2);
    }

    this->adjacency_list[id1][id2] = tmp2;
    this->adjacency_list[id2][id1] = tmp1;
}

/**
 Prints the Vertex::id of every Vertex stored in Graph
*/
void Graph::printGraph()
{
    for (auto vertex : this->vertices)
    {
        std::cout << vertex.second->id << std::endl;
    }
}

/**
 Sets the visited attribute of every Vertex stored to false
*/
void Graph::clearState()
{
    for (auto vertex : this->vertices)
    {
        vertex.second->visited = false;
    }
}

bool Graph::dfs(unsigned int start, unsigned int key)
{
    std::stack<Graph::Vertex *> stack;
    stack.push(this->vertices[start]);
    this->vertices[start]->visited = true;

    while (!stack.empty())
    {
        auto tmp = stack.top();
        stack.pop();

        for (auto neighbor : this->adjacency_list[tmp->id])
        {
            if (!neighbor.second->visited)
            {
                if (neighbor.second->id == key)
                    return true;

                stack.push(neighbor.second);
                neighbor.second->visited = true;
            }
        }
    }

    return false;
}

void Graph::dfs(unsigned int start)
{
    std::stack<Graph::Vertex *> stack;
    stack.push(this->vertices[start]);
    this->vertices[start]->visited = true;

    std::cout << "DFS: " << std::endl;

    while (!stack.empty())
    {
        auto tmp = stack.top();
        stack.pop();

        std::cout << tmp->id << " ";

        for (auto neighbor : this->adjacency_list[tmp->id])
        {
            if (!neighbor.second->visited)
            {
                stack.push(neighbor.second);
                neighbor.second->visited = true;
            }
        }
    }

    std::cout << std::endl;
}

void Graph::bfs(unsigned int start)
{
    std::queue<Graph::Vertex *> queue;
    queue.push(this->vertices[start]);
    queue.push(nullptr);
    this->vertices[start]->visited = true;

    std::cout << "BFS: " << std::endl;

    int depth = 1;
    std::cout << "Depth " << depth << std::endl;

    while (!queue.empty())
    {
        auto tmp = queue.front();
        queue.pop();

        if (tmp == nullptr)
        {
            if (queue.front() == nullptr)
                return;
            else
            {
                depth++;
                std::cout << std::endl
                          << "Depth " << depth << std::endl;
                queue.push(nullptr);
            }
        }
        else
        {
            std::cout << tmp->id << " ";

            for (auto neighbor : this->adjacency_list[tmp->id])
            {
                if (!neighbor.second->visited)
                {
                    queue.push(neighbor.second);
                    neighbor.second->visited = true;
                }
            }
        }
    }
}