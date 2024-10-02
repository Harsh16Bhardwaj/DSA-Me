#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class stack{
public:    
    Node* top;
    stack(){
        top = nullptr;
    }

    void push(int x){
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    }

    void pop(){
        if(top < 0 ){
            cout << "Stack is empty";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
};