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
    //Open morse code file to build tree from
    if(!fin){
        cout << "Input file could not be opened. Exiting\n";
        return 0;
    }

    //Here the file will be read in to build a tree, then a string will be decoded and another one encoded

    return 0;
}
