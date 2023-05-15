#pragma once
#include <vector>
#include <string>
#include <unordered_map>
#include <tuple>
#include <queue>

typedef std::tuple<unsigned int, unsigned int> two_tuple;

class Graph
{
public:
    class Vertex
    {
    public:
        /// @brief  ID of the Vertex
        unsigned int id;
        /// @brief Was the Vertex visited by a search algorithm
        bool visited;

        Vertex(unsigned int id);
    };

    /// @brief The number of vertices in a Graph
    unsigned int vertex_count = 0;
    /// @brief The number of edges in a Graph
    unsigned int edge_count = 0;
    /// @brief The number of components in a Graph
    unsigned int components_count = 0;

    /// @brief Map of all vertices in a Graph
    std::unordered_map<unsigned int, Graph::Vertex *> vertices;
    /// @brief Adjacency list containing all vertices and its neighbors in a Graph
    std::unordered_map<unsigned int, std::unordered_map<unsigned int, Graph::Vertex *>> adjacency_list;

    Graph(std::string filepath);
    ~Graph();

    Graph::Vertex *findVertex(unsigned int id);
    Graph::Vertex *insertVertex(unsigned int id);
    void insertEdge(unsigned int id1, unsigned int id2);

    bool dfs(unsigned int start, unsigned int key);
    void dfs(unsigned int start);
    void bfs(unsigned int start);

    void clearState();
    void printGraph();
};

class Node
{
public:
    char c;
    Node *left = nullptr;
    Node *right = nullptr;

    Node(char c)
    {
        this->c = c;
        this->left = nullptr;
        this->right = nullptr;
    }

    ~Node()
    {
        if (this->left != nullptr)
            delete this->left;

        if (this->right != nullptr)
            delete this->right;
    }

    void addNode(char c)
    {
        if (this->c > c)
        {
            if (this->left == nullptr)
                this->left = new Node(c);
            else
                this->left->addNode(c);
        }
        else if (this->c < c)
        {
            if (this->right == nullptr)
                this->right = new Node(c);
            else
                this->right->addNode(c);
        }
    }
};

class BinaryTree
{
public:
    Node *node;

    BinaryTree(char c) { this->node = new Node(c); }
    ~BinaryTree() { delete this->node; }

    void addNode(char c) { this->node->addNode(c); }

    bool binarySearch(const char c)
    {
        Node *tmp = this->node;

        while (true)
        {
            if (c == tmp->c)
                return true;

            if (c < tmp->c)
            {
                if (tmp->left != nullptr)

                    tmp = tmp->left;
                else
                    return false;
            }
            else if (c > tmp->c)
            {
                if (tmp->right != nullptr)

                    tmp = tmp->right;
                else
                    return false;
            }
        }
    }

    void bfs()
    {
        std::queue<Node *> queue;
        queue.push(this->node);

        while (!queue.empty())
        {
            Node *tmp = queue.front();
            queue.pop();

            if (tmp != nullptr)
            {
                std::cout << tmp->c << " ";
                queue.push(tmp->left);
                queue.push(tmp->right);
            }
        }

        std::cout << std::endl;
    }
};