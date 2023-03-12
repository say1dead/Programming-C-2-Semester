//
// Created by kochu on 11.03.2023.
//

#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Stack {
    struct Node* top = NULL;
    void Push(int element) {
        Node *temp = new Node;
        temp->data = element;
        temp->next = top;
        top = temp;
    }
    int Pull(){
        int result;
        struct Node *temp = top;
        if (top == NULL){
            return 0;
        }
        result = temp -> data;
        top = top->next;
        delete (temp);
        return result;
    }
    void Show(){
        struct Node *temp = top;
        if (temp == nullptr){
            cout << "empty";
        }
        while (temp != nullptr){
            cout << temp -> data << ' ';
            temp = temp -> next;
        }
    }
};

