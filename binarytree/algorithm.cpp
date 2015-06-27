#include "binarytree.h"
#include "algorithm.h"
#include <iostream>
#include <queue>
using namespace std;

// breadth first traversal
void LevelOrderTraversal(node* root)
{
    if (root == nullptr) return;

    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node* queueFront = q.front();

        cout << queueFront->data << " ";

        if (queueFront->left)
            q.push(queueFront->left);
        if (queueFront->right)
            q.push(queueFront->right);

        q.pop();
    }
    cout << endl;
}

// depth first traversal
void PreOrderTraversal(node* root)
{
    if (root == nullptr) return;

    cout << root->data << " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void InOrderTraversal(node* root)
{
    if (root == nullptr) return;

    InOrderTraversal(root->left);
    cout << root->data << " ";
    InOrderTraversal(root->right);
}

void PostOrderTraversal(node* root)
{
    if (root == nullptr) return;

    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->data << " ";
}