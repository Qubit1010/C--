#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};

Node* head = new Node();

// insert at beginning
void insertAtbeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// insert at end
void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL){
        head = newNode;
        return;
    } 

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

// insert at specific position
void insertAtposition(int value, int pos) {
    Node* newNode = new Node();
    newNode->data = value;

    if(pos == 1 ){
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp != NULL; i++){
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// insert after a node
void insertAfterNode(Node* prevNode, int value) {
    if (prevNode == NULL) {
        cout << "Previous node cannot be NULL" << endl;
        return;
    }
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// delete the first node
void deleteFirstNode(){
    if (head == NULL) return;

    Node* temp = head;
    head = head->next;
    delete temp;
}

// delete the last node
void deleteLastNode(){
    if (head == NULL) return;

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

//  delete at specific position
void deleteAtPosition(int pos){
    if (head == NULL) return;

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }

    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}

// delete a node by value
void deleteNode(int value){
    if (head == NULL) return;

    if(head->data == value){
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    Node* temp = head;
    while(temp->next == NULL && temp->next->data != value){
        temp = temp->next;
    }

    if (temp->next == NULL) {
        cout << "Value not found!" << endl;
        return;
    }
    
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
    
}

void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main () {
    // create 3 nodes
    Node* first = new Node();
    Node* second = new Node();
    
    // assign data 
    head->data = 1;
    first->data = 2;
    second->data = 3;

    // link the nodes 
    head->next = first;
    first->next = second;
    second->next = nullptr;

    insertAtbeginning(4);
    insertAtEnd(5);
    insertAtposition(6, 3);
    display();
    insertAfterNode(first, 7);
    deleteFirstNode();
    deleteNode(2);
    deleteAtPosition(3);
    display();
       
    return 0;
}


// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() : head(nullptr) {}

//     // Utility function: insert at end
//     void insertAtEnd(int val) {
//         Node* newNode = new Node(val);
//         if (!head) {
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next) temp = temp->next;
//         temp->next = newNode;
//     }

//     // Utility function: display list
//     void display() {
//         Node* temp = head;
//         while (temp) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL\n";
//     }

//     Node*& getHead() { return head; }
// };

// // //* Problem (1): Reverse the linked list in-place
// void reverseList(Node*& head) {
//     Node* prev = nullptr;
//     Node* curr = head;
//     Node* next = nullptr;

//     while (curr) {
//         next = curr->next;   // store next
//         curr->next = prev;   // reverse pointer
//         prev = curr;         // move prev
//         curr = next;         // move curr
//     }
//     head = prev; // new head
// }

// // //* Problem (2): Find the middle node
// void printMiddle(Node* head) {
//     if (!head) return;

//     Node* slow = head;
//     Node* fast = head;

//     while (fast && fast->next) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     cout << "Middle Node: " << slow->data << endl;
// }

// // //* Problem (3): Insert into a sorted linked list
// void insertSorted(Node*& head, int val) {
//     Node* newNode = new Node(val);

//     if (!head || head->data >= val) {
//         newNode->next = head;
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next && temp->next->data < val) {
//         temp = temp->next;
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // //* Problem (4): Remove duplicates from a sorted list
// void removeDuplicates(Node* head) {
//     Node* curr = head;
//     while (curr && curr->next) {
//         if (curr->data == curr->next->data) {
//             Node* dup = curr->next;
//             curr->next = curr->next->next;
//             delete dup;
//         } else {
//             curr = curr->next;
//         }
//     }
// }

// // //* Problem (5): Count occurrences of a value
// int countOccurrences(Node* head, int key) {
//     int count = 0;
//     Node* temp = head;
//     while (temp) {
//         if (temp->data == key) count++;
//         temp = temp->next;
//     }
//     return count;
// }

// // //* Main Program (for testing all tasks)
// int main() {
//     LinkedList list;
//     list.insertAtEnd(1);
//     list.insertAtEnd(2);
//     list.insertAtEnd(2);
//     list.insertAtEnd(3);
//     list.insertAtEnd(4);

//     cout << "Original List: ";
//     list.display();

//     // Problem 1: Reverse
//     reverseList(list.getHead());
//     cout << "Reversed List: ";
//     list.display();

//     // Problem 2: Middle
//     printMiddle(list.getHead());

//     // Problem 3: Insert sorted
//     insertSorted(list.getHead(), 3);
//     cout << "After inserting 3: ";
//     list.display();

//     // Problem 4: Remove duplicates
//     removeDuplicates(list.getHead());
//     cout << "After removing duplicates: ";
//     list.display();

//     // Problem 5: Count occurrences
//     int val = 3;
//     cout << "Value " << val << " occurs "
//          << countOccurrences(list.getHead(), val) << " times\n";

//     return 0;
// }

