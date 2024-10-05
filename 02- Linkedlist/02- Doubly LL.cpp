#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (head) {
            newNode->next = head;
            head->prev = newNode;
        }
        head = newNode;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteNode(int val) {
        Node* temp = head;
        while (temp) {
            if (temp->data == val) {
                if (temp->prev) temp->prev->next = temp->next;
                if (temp->next) temp->next->prev = temp->prev;
                if (temp == head) head = temp->next;
                delete temp;
                return;
            }
            temp = temp->next;
        }
    }

    void displayForward() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void displayBackward() {
        Node* temp = head;
        if (!temp) return;
        while (temp->next) temp = temp->next;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->prev;
        }
        std::cout << std::endl;
    }

    ~DoublyLinkedList() {
        Node* current = head;
        while (current) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtBeginning(10);
    dll.insertAtBeginning(20);
    dll.insertAtEnd(30);
    dll.insertAtEnd(40);
    dll.displayForward();
    dll.displayBackward();
    dll.deleteNode(20);
    dll.displayForward();
    return 0;
}
