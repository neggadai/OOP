#include <iostream>

struct Node {
    int data;
    Node* prev;   
    Node* next;  
};

struct DoublyLinkedList {
    private:
        Node* head;      
        Node* tail;      

    public:
        DoublyLinkedList() : head(nullptr), tail(nullptr) {}

        void append(int data) {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->prev = tail;
            newNode->next = nullptr;

            if (head == nullptr) {
                head = newNode;
            } else {
                tail->next = newNode;
            }

            tail = newNode;
        }

        void display() {
            Node* current = head;
            while (current != nullptr) {
                std::cout << current->data << " ";
                current = current->next;
            }
            std::cout << std::endl;
        }
};

int main() {
    DoublyLinkedList dll;

    dll.append(1);
    dll.append(2);
    dll.append(3);
    dll.append(4);

    std::cout << "Двосвязный список: ";
    dll.display();

    return 0;
}