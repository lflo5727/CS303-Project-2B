#include "binarytree.h"
#include <string>
#include <sstream>

using namespace std;

binaryTree::binaryTree(){
    root = NULL;
}

void binaryTree::addNode(node*&tmp, char letter, string code){
    //code to insert a new node containing the ASCII char and Morse Code
    if(tmp == NULL){
        tmp = new node();
    }
    if(code.size() == 0){
        tmp->letter = letter;
    }
    else{
        if(code[0] == '.'){
            addNode(tmp->left, letter, code.substr(1));
        }
        else{
            addNode(tmp->right, letter, code.substr(1));
        }
    }
}

char binaryTree::getLetter(node *tmp, string code){
    //Function to retrieve ASCII char of Morse Code input
    if(tmp->letter != 0 && code.size() == 0){
           return tmp->letter;
    }
    else{
        if(code[0] == '.'){
            return getLetter(tmp->left, code.substr(1));
        }
        else{
            return getLetter(tmp->right, code.substr(1));
        }
    }
}


void binaryTree::add(char letter, string code){
    addNode(root, letter, code);
}

char binaryTree::getL(string code){
    return getLetter(root, code);
}

