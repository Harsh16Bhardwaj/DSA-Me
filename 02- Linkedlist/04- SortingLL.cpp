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

Node* middleNode(Node* head) {
    Node* slow = head;
    Node* fast = head->next;

    while(fast != nullptr || fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* a, Node* b) {
    if (a == nullptr) return b;
    if (b == nullptr) return a;

    Node* result;
    if (a->data <= b->data) {
        result = a;
        result->next = merge(a->next, b);
    } else {
        result = b;
        result->next = merge(a, b->next);
    }
    return result;
}

Node* mergesort(Node* head){
    if(head == nullptr || head->next == nullptr)
        return head;

    Node* mid = middleNode(head);
    Node* nextToMid = mid->next;
    mid->next = nullptr;

    Node* left = mergesort(head);
    Node* right = mergesort(nextToMid);

    return merge(left, right);
}