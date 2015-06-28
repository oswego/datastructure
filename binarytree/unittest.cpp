#include "binarytree.h"
#include "algorithm.h"
#include <iostream>
using namespace std;

int main()
{
    btree bt;
    bt.insert(10);
    bt.insert(6);
    bt.insert(14);
    bt.insert(5);
    bt.insert(8);
    bt.insert(11);
    bt.insert(18);

    node* root = bt.search(10);

    // breadth first traversal
    LevelOrderTraversal(root);

    // depth first traversal
    PreOrderTraversal(root);
    cout << endl;
    InOrderTraversal(root);
    cout << endl;
    PostOrderTraversal(root);
    cout << endl;

    return 0;
}