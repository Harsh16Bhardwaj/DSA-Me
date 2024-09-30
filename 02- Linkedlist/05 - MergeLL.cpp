#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* mergeLl(Node* a, Node* b) {
    Node* result = nullptr;
    if (a == nullptr)
        return b;
    if (b == nullptr)
        return a;

    if(a->data <= b->data){
        result =a;
        result->next = mergeLl(a->next, b);
    }
    else
    {
        result = b;
        result->next = mergeLl(a, b->next);
    }
    return result;
}