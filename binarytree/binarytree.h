#pragma once

struct node
{
    int data;
    node* left;
    node* right;
};

class btree
{
public:
    btree();
    ~btree();

    void insert(int key);
    node* search(int key);
    void destory_tree();

private:
    void destory_tree(node* leaf);
    void insert(int key, node* leaf);
    node* search(int key, node* leaf);

    node* root;
};