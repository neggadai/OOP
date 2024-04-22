#include <iostream>
#include <string>
struct Node
{
    int data;
    Node* next;
};



struct linkedList
{
    private:
        Node* head;
    
    public:
        linkedList() : head(nullptr) {}

        void addElement(int data) {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = nullptr;

            if (head == nullptr) {
            head = newNode;
            } 
            else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    linkedList myList;

    myList.addElement(1);
    myList.addElement(2);
    myList.addElement(3);

    std::cout << "Список: ";
    myList.display();

    return 0;
}