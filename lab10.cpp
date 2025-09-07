#include <iostream>
#include <string>
using namespace std;

// Node structure
struct Node {
    string name;
    Node* next;
    Node* prev;
    Node(string val) : name(val), next(nullptr), prev(nullptr) {}
};

// Deque class
class Deque {
private:
    Node* front;
    Node* rear;

public:
    Deque() : front(nullptr), rear(nullptr) {}

    // Add normal patient (rear)
    void addRear(string name) {
        Node* newNode = new Node(name);
        if (!rear) { // empty list
            front = rear = newNode;
        } else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
    }

    // Add emergency patient (front)
    void addFront(string name) {
        Node* newNode = new Node(name);
        if (!front) { // empty list
            front = rear = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    // Remove patient from front (doctor calls)
    void removeFront() {
        if (!front) {
            cout << "No patients in queue!" << endl;
            return;
        }
        cout << front->name << " is called by the doctor." << endl;
        Node* temp = front;
        front = front->next;
        if (front) front->prev = nullptr;
        else rear = nullptr;
        delete temp;
    }

    // Remove patient from rear (cancel)
    void removeRear() {
        if (!rear) {
            cout << "No patients in queue!" << endl;
            return;
        }
        cout << rear->name << " left before their turn (cancelled)." << endl;
        Node* temp = rear;
        rear = rear->prev;
        if (rear) rear->next = nullptr;
        else front = nullptr;
        delete temp;
    }

    // Display queue
    void display() {
        if (!front) {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* temp = front;
        cout << "Patients in queue: ";
        while (temp) {
            cout << temp->name << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main program
int main() {
    Deque dq;

    cout << "\n--- Scenario 1 ---" << endl;
    dq.addRear("Ali");
    dq.addRear("Sara");
    dq.display();

    dq.removeFront();  // Ali called
    dq.removeRear();   // Sara cancels
    dq.display();      // should be empty

    cout << "\n--- Scenario 2 ---" << endl;
    dq.addRear("Hassan");
    dq.addFront("Fatima"); // emergency
    dq.addRear("Bilal");
    dq.display();

    dq.removeFront();  // Fatima called
    dq.display();      // Hassan Bilal remain

    return 0;
}
