#include <iostream>
#include <string>
using namespace std;

// Node structure for doubly linked list
struct Node {
    string name;
    Node* next;
    Node* prev;
    Node(string n) : name(n), next(nullptr), prev(nullptr) {}
};

// Deque implementation using Doubly Linked List
class Deque {
private:
    Node* front;
    Node* rear;

public:
    Deque() : front(nullptr), rear(nullptr) {}

    // Insert at rear (regular patient registration)
    void insertRear(string name) {
        Node* newNode = new Node(name);
        if (!rear) { // empty queue
            front = rear = newNode;
        } else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
    }

    // Insert at front (emergency patient)
    void insertFront(string name) {
        Node* newNode = new Node(name);
        if (!front) { // empty queue
            front = rear = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    // Remove from front (doctor calls next patient)
    void deleteFront() {
        if (!front) {
            cout << "No patients in queue\n";
            return;
        }
        cout << "Doctor calls: " << front->name << endl;
        Node* temp = front;
        front = front->next;
        if (front) front->prev = nullptr;
        else rear = nullptr; // queue becomes empty
        delete temp;
    }

    // Remove from rear (patient cancels)
    void deleteRear() {
        if (!rear) {
            cout << "No patients in queue\n";
            return;
        }
        cout << "Patient leaves: " << rear->name << endl;
        Node* temp = rear;
        rear = rear->prev;
        if (rear) rear->next = nullptr;
        else front = nullptr; // queue becomes empty
        delete temp;
    }

    // Display queue
    void display() {
        if (!front) {
            cout << "(empty)\n";
            return;
        }
        Node* temp = front;
        while (temp) {
            cout << temp->name << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Deque patients;

    cout << "=== Task 1 ===" << endl;
    patients.insertRear("Ali");   // 1. Ali enters (rear)
    patients.insertRear("Sara");  // 2. Sara enters (rear)

    cout << "Queue: ";
    patients.display();

    patients.deleteFront(); // 3. Doctor calls Ali
    patients.deleteRear();  // 4. Sara leaves (cancelled)

    cout << "Queue: ";
    patients.display();     // 5. Empty


    cout << "\n=== Task 2 ===" << endl;
    patients.insertRear("Hassan");   // 1. Hassan enters (rear)
    patients.insertFront("Fatima");  // 2. Fatima enters (emergency front)
    patients.insertRear("Bilal");    // 3. Bilal enters (rear)

    cout << "Queue: ";
    patients.display();              // 4. Fatima Hassan Bilal

    patients.deleteFront();          // 5. Doctor calls Fatima

    cout << "Queue: ";
    patients.display();              // 6. Hassan Bilal

    return 0;
}
