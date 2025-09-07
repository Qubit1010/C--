#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = next = nullptr;
    }
};

// Doubly Linked List class
class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    // Insert at end
    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {  // if list empty
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;  // go to last node
        temp->next = newNode;
        newNode->prev = temp;
    }

    // Insert at front
    void insertFront(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // Delete node by value
    void deleteNode(int val) {
        if (!head) return;

        Node* temp = head;

        // if head is to be deleted
        if (temp->data == val) {
            head = head->next;
            if (head) head->prev = nullptr;
            delete temp;
            return;
        }

        // search the node
        while (temp && temp->data != val) temp = temp->next;
        if (!temp) {
            cout << "Value " << val << " not found!" << endl;
            return;
        }

        // unlink the node
        if (temp->next) temp->next->prev = temp->prev;
        if (temp->prev) temp->prev->next = temp->next;
        delete temp;
    }

    // Find a node by value
    bool findNode(int val) {
        Node* temp = head;
        while (temp) {
            if (temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }

    // Display list forward
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function to test
int main() {
    DoublyLinkedList list;

    // Insert some elements
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertFront(5);
    list.insertEnd(30);

    cout << "List after insertion: ";
    list.display();

    // Delete element
    list.deleteNode(20);
    cout << "List after deleting 20: ";
    list.display();

    // Find node
    int x = 30;
    if (list.findNode(x))
        cout << x << " found in the list." << endl;
    else
        cout << x << " not found." << endl;

    return 0;
}
