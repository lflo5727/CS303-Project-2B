#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <string>

using namespace std;

class binaryTree{
    private:
        struct Node{
            char letter;
            string code;
            Node *left;
            Node *right;
            Node(){
                letter = 0;
                code = "";
                left = NULL;
                right = NULL;
            }
        };
        Node *root;

    public:
        binaryTree();
        //Functions to add nodes and retrieve them
        void addNode(Node*&tmp, char letter, string code);
        char getLetter(Node *tmp, string code);
        string getCode(Node *tmp, char letter);

};

#endif // BINARYTREE_H
