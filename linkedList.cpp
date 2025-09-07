#include <iostream>
using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// Node* head = NULL;


// // 2. Insert at Beginning
// void insertAtBeginning(int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = head;
//     head = newNode;
// }


// // 3. Insert at End
// void insertAtEnd(int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }


// // 4. Insert at a Specific Position
// void insertAtPosition(int value, int pos) {
//     Node* newNode = new Node();
//     newNode->data = value;

//     if (pos == 1) {
//         newNode->next = head;
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         cout << "Position out of range!" << endl;
//         return;
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // 5. Delete a Node
// void deleteNode(int value) {
//     if (head == NULL) return;

//     if (head->data == value) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL && temp->next->data != value) {
//         temp = temp->next;
//     }

//     if (temp->next == NULL) {
//         cout << "Value not found!" << endl;
//         return;
//     }

//     Node* toDelete = temp->next;
//     temp->next = toDelete->next;
//     delete toDelete;
// }

// void display() {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     insertAtBeginning(10);
//     insertAtBeginning(20);
//     insertAtEnd(30);
//     insertAtPosition(25, 3);

//     cout << "Linked List: ";
//     display();

//     deleteNode(20);
//     cout << "After deletion: ";
//     display();

//     return 0;
// }


struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Utility function: insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    // Utility function: display list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    Node*& getHead() { return head; }
};

//* Problem (1): Reverse the linked list in-place
void reverseList(Node*& head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr) {
        next = curr->next;   // store next
        curr->next = prev;   // reverse pointer
        prev = curr;         // move prev
        curr = next;         // move curr
    }
    head = prev; // new head
}

//* Problem (2): Find the middle node
void printMiddle(Node* head) {
    if (!head) return;

    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle Node: " << slow->data << endl;
}

//* Problem (3): Insert into a sorted linked list
void insertSorted(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (!head || head->data >= val) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next && temp->next->data < val) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

//* Problem (4): Remove duplicates from a sorted list
void removeDuplicates(Node* head) {
    Node* curr = head;
    while (curr && curr->next) {
        if (curr->data == curr->next->data) {
            Node* dup = curr->next;
            curr->next = curr->next->next;
            delete dup;
        } else {
            curr = curr->next;
        }
    }
}

//* Problem (5): Count occurrences of a value
int countOccurrences(Node* head, int key) {
    int count = 0;
    Node* temp = head;
    while (temp) {
        if (temp->data == key) count++;
        temp = temp->next;
    }
    return count;
}

//* Main Program (for testing all tasks)
int main() {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);

    cout << "Original List: ";
    list.display();

    // Problem 1: Reverse
    reverseList(list.getHead());
    cout << "Reversed List: ";
    list.display();

    // Problem 2: Middle
    printMiddle(list.getHead());

    // Problem 3: Insert sorted
    insertSorted(list.getHead(), 3);
    cout << "After inserting 3: ";
    list.display();

    // Problem 4: Remove duplicates
    removeDuplicates(list.getHead());
    cout << "After removing duplicates: ";
    list.display();

    // Problem 5: Count occurrences
    int val = 3;
    cout << "Value " << val << " occurs "
         << countOccurrences(list.getHead(), val) << " times\n";

    return 0;
}
