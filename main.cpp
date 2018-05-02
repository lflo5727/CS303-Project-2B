/////////////////////////////////////
//              CS303
//           Project 2B
//    Liam Floyd & Erik Rairden
////////////////////////////////////
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <iterator>
#include "binarytree.h"


using namespace std;

int main()
{
    ifstream treeBuild("morse.txt");

    //Open Morse code file to build tree from
    if(!treeBuild){
       cout << "Input file could not be opened. Exiting\n";
       return 0;
    }

    string letter, code;
    string textEncode = "testing";
    string morseDecode = "_ . ... _ .. _. __. ";
    binaryTree morseTree;

    //Build the tree from file
    while(treeBuild >> letter){
           treeBuild >> code;
           morseTree.add(letter[0], code);
    }

    string str, str2;
    char ch;
    int count = 0;

    // read character by character
    str = "";
    str2 = "";
    for(int i = 0; i < morseDecode.size(); ++i){
        ch = morseDecode[i];
        if(ch == ' '){
            if(str != "")
                str2 += morseTree.getL(str);
            str = "";
            ++count;
            if(count == 3){
                str2 += " ";
            }
        }
        else if(ch == '.' || ch == '_'){
            str += ch;
            count = 0;
        }
    }
    cout << "Decoded Morse: " << str2 << endl;
    treeBuild.close();

    //Map to encode ASCII text
    ifstream buildMap("morse.txt");
    map <char, string> morseMap;
    string let, mor, encoded;

    //Build map from morse.txt
    while(buildMap >> let){
        buildMap >> mor;
        morseMap.insert(pair <char, string> (let[0], mor));
    }

    for(int p = 0; p < textEncode.size(); ++p){
        ch = textEncode[p];
        for(map<char,string>::iterator iter = morseMap.begin(); iter != morseMap.end(); iter++){
            if(iter->first == ch){
                encoded += iter->second;
                encoded += " ";
                break;
            }
        }
    }

    cout << "Encoded Text: " << encoded << endl;
    return 0;
}
