#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* reverse_iterator(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) { // Fix the loop condition
        next = current->next; // Move next to the next node
        current->next = prev; // Reverse the current node's pointer
        prev = current; // Move prev and current one step forward
        current = next;
    }
    return prev; // Return the new head of the reversed list
}

Node* recurrsive_reverse(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* newhead = recurrsive_reverse(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newhead; // Ensure to return the new head
}

void printList(Node* head) { // Function to print the linked list
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    printList(head);

    head = recurrsive_reverse(head);
    cout << "Reversed List (Recursive): ";
    printList(head);

    // Clean up memory
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
