//
// Created by kochu on 25.02.2023.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ofstream file;

void open(string name){//1
    file.open(name);
}

void close(string name){//2
    file.close();
}

void check(string name){//3
    if (file.is_open()){
        cout << "\n== Status file - File open ==\n";
    }
    else{
        cout << "\n== Status file - File close ==\n";
    }
}

void namefile(string name){//4
    cout << "\n== Name file - " << name << " ==" << endl;
}

void add_string(string name, string str){//5
    if (file.is_open()){
        file << str << endl;
    }
}

void add_int(string name, int num){//6
    if (file.is_open()){
        file << num << endl;
    }
}

void add_float(string name, float num){//7
    if (file.is_open()){
            file << num << endl;
        }
    }
