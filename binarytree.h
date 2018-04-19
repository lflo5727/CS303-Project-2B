#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <string>

class binaryTree{
    private:
        struct Node{
            char letter;
            string code;
            Node *left;
            Node *right;
        };
        Node *root;

    public:
        binaryTree();
        //Functions to add nodes and retrieve them
        void addNode(node*&tmp, char letter, string code);
        string getNode(node *tmp, string code);

};

#endif // BINARYTREE_H
