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
        else if(code[0] == '_'){
            addNode(tmp->right, letter, code.substr(1));
        }
    }
}

char binaryTree::getLetter(Node *tmp, string code){
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

string binaryTree::getCode(Node *tmp, char letter){
    //Function to retrieve Morse Code of ASCII input

}

void binaryTree::add(char letter, string code){
    addNode(root, letter, code);
}

char binaryTree::getL(string code){
    getLetter(root, code);
}
string binaryTree::getC(char letter){
    getCode(root, letter);
}
