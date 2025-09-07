#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *arr;
    int front, rear, size, capacity;

public:
    CircularQueue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = rear = -1;
        size = 0;
    }

    ~CircularQueue() {
        delete[] arr;
    }

    // Check if queue is full
    bool isFull() {
        return size == capacity;
    }

    // Check if queue is empty
    bool isEmpty() {
        return size == 0;
    }

    // Enqueue (add element at rear)
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        rear = (rear + 1) % capacity; // circular increment
        arr[rear] = value;
        if (front == -1) front = rear; // first element
        size++;
        cout << value << " inserted into queue." << endl;
    }

    // Dequeue (remove element from front)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! No elements to remove." << endl;
            return;
        }
        cout << arr[front] << " removed from queue." << endl;
        front = (front + 1) % capacity;
        size--;
        if (size == 0) front = rear = -1; // reset
    }

    // Peek (front element)
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    // Display queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        int count = size;
        int i = front;
        while (count--) {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << endl;
    }
};

// Main program
int main() {
    CircularQueue q(5); // capacity 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(60);
    q.enqueue(70);

    q.display();

    cout << "Front element is: " << q.peek() << endl;

    return 0;
}
