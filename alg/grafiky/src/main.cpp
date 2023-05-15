#include <iostream>
#include <chrono>
#include <iomanip>
#include "libs/graph.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "invalid parameters" << std::endl;
        return 1;
    }

    Graph graf(argv[1]);
    std::cout << (graf.dfs(4, 1) ? "vrchol existuj" : "vrchol neexistuj") << std::endl;
    graf.clearState();
    graf.bfs(8);
    graf.clearState();
    graf.dfs(8);

    BinaryTree *strom = new BinaryTree('n');
    strom->addNode('t');
    strom->addNode('x');
    strom->addNode('p');
    strom->addNode('f');
    strom->addNode('j');
    strom->addNode('l');
    strom->addNode('d');
    strom->addNode('v');
    strom->addNode('h');
    strom->addNode('r');
    strom->addNode('b');

    strom->bfs();

    std::cout << (strom->binarySearch('r') ? "pismeno existuje" : "pismeno neexistuje") << std::endl;

    return 0;
}