//
// Created by kochu on 11.03.2023.
//

#ifndef LAB3_PROGA_CLASS_STACK_H
#define LAB3_PROGA_CLASS_STACK_H

#include <iostream>
#include "stack.cpp"
using namespace std;

class stack{
public:
    void Start_stack(){
        Stack stack;
        int element;
        cout << "Enter your action:\n";
        cout << "1. Push (>>).\n2. Pull (<<).\n3. Show (=).\n";
        string s;
        while(cin >> s){
            if (s == ">>"){
                cout << "Enter number -";
                cin >> element;
                stack.Push(element);
            }
            if (s == "<<"){
                stack.Pull();
            }
            if (s == "="){
                cout << "Stack: ";
                stack.Show();
                cout << "\n";
            }
        }
    }
};

#endif //LAB3_PROGA_CLASS_STACK_H
