#include "binarytree.h"
#include <string>

using namespace std;

binaryTree::binaryTree(){
    root = NULL;
}

void binaryTree::addNode(Node*&tmp, char letter, string code){
    //code to insert a new node containing the ASCII char and Morse Code
    if(tmp == NULL){
        tmp = new Node();
    }
    if(code.size() == 0){
           tmp->letter = letter;
           tmp->code = code;
    }
    else{
        if(code[0] == '.'){
            addNode(tmp->left, letter, code.substr(1));
        }
        else if(code[0] == '-'){
            addNode(tmp->right, letter, code.substr(1));
        }
    }
}

string binaryTree::getNode(Node *tmp, string code){
    //code to retrieve ASCII char of Morse Code input
    //May need separate function to retrieve Morse code for ASCII chars
}
