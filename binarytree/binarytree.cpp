#include "binarytree.h"

btree::btree()
{
    root = nullptr;
}

btree::~btree()
{
    destory_tree();
}

void btree::destory_tree(node* leaf)
{
    if (leaf!=nullptr)
    {
        destory_tree(leaf->left);
        destory_tree(leaf->right);
        delete leaf;
    }
}

void btree::insert(int key, node* leaf)
{
    if (key < leaf->data)
    {
        if (leaf->left != nullptr)
            insert(key, leaf->left);
        else
        {
            leaf->left = new node;
            leaf->left->data = key;
            leaf->left->left = nullptr;
            leaf->left->right = nullptr;
        }
    }
    else if (key >= leaf->data)
    {
        if (leaf->right != nullptr)
            insert(key, leaf->right);
        else
        {
            leaf->right = new node;
            leaf->right->data = key;
            leaf->right->left = nullptr;
            leaf->right->right = nullptr;
        }
    }
}

node* btree::search(int key, node* leaf)
{
    if (leaf != nullptr)
    {
        if (key == leaf->data)
            return leaf;
        if (key < leaf->data)
            return search(key, leaf->left);
        else
            return search(key, leaf->right);
    }
    else
        return nullptr;
}

void btree::insert(int key)
{
    if (root != nullptr)
        insert(key, root);
    else
    {
        root = new node;
        root->data = key;
        root->left = nullptr;
        root->right = nullptr;
    }
}

node* btree::search(int key)
{
    return search(key, root);
}

void btree::destory_tree()
{
    destory_tree(root);
}