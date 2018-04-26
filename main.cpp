/////////////////////////////////////
//              CS303
//           Project 2B
//    Liam Floyd & Erik Rairden
////////////////////////////////////
#include <iostream>
#include <string>
#include <fstream>
#include "binarytree.h"

using namespace std;

int main()
{
    ifstream fin("morse.txt");
    //Open Morse code file to build tree from
    if(!fin){
        cout << "Input file could not be opened. Exiting\n";
        return 0;
    }

    string letter, code;
    string textEncode = "testing";
    string morseDecode = "_ . ... _ .. _. __.";
    binaryTree morseTree;





    //Here the file will be read in to build a tree, then a string will be decoded and another one encoded

    return 0;
}
