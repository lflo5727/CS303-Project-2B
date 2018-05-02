#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <string>

using namespace std;

struct node{
    //Tree Node
    char letter;
    node *left;
    node *right;
    node(){
        letter = 0;
        left = NULL;
        right = NULL;
    }
};

class binaryTree{
    private:
        node *root;
        //Functions to add nodes and retrieve them
        void addNode(node*&tmp, char letter, string code);
        char getLetter(node *tmp, string code);

    public:
        binaryTree();
        //Public functions to call private ones
        void add(char letter, string code);
        char getL(string code);

};

#endif // BINARYTREE_H
