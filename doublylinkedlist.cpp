#include <iostream>
using namespace std;

// Node structure
// struct Node {
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int val) {
//         data = val;
//         prev = next = nullptr;
//     }
// };

// // Doubly Linked List class
// class DoublyLinkedList {
// private:
//     Node* head;

// public:
//     DoublyLinkedList() {
//         head = nullptr;
//     }

//     // Insert at end
//     void insertEnd(int val) {
//         Node* newNode = new Node(val);
//         if (!head) {  // if list empty
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next) temp = temp->next;  // go to last node
//         temp->next = newNode;
//         newNode->prev = temp;
//     }

//     // Insert at front
//     void insertFront(int val) {
//         Node* newNode = new Node(val);
//         if (!head) {
//             head = newNode;
//             return;
//         }
//         newNode->next = head;
//         head->prev = newNode;
//         head = newNode;
//     }

//     // Delete node by value
//     void deleteNode(int val) {
//         if (!head) return;

//         Node* temp = head;

//         // if head is to be deleted
//         if (temp->data == val) {
//             head = head->next;
//             if (head) head->prev = nullptr;
//             delete temp;
//             return;
//         }

//         // search the node
//         while (temp && temp->data != val) temp = temp->next;
//         if (!temp) {
//             cout << "Value " << val << " not found!" << endl;
//             return;
//         }

//         // unlink the node
//         if (temp->next) temp->next->prev = temp->prev;
//         if (temp->prev) temp->prev->next = temp->next;
//         delete temp;
//     }

//     // Find a node by value
//     bool findNode(int val) {
//         Node* temp = head;
//         while (temp) {
//             if (temp->data == val) return true;
//             temp = temp->next;
//         }
//         return false;
//     }

//     // Display list forward
//     void display() {
//         Node* temp = head;
//         while (temp) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// // Main function to test
// int main() {
//     DoublyLinkedList list;

//     // Insert some elements
//     list.insertEnd(10);
//     list.insertEnd(20);
//     list.insertFront(5);
//     list.insertEnd(30);

//     cout << "List after insertion: ";
//     list.display();

//     // Delete element
//     list.deleteNode(20);
//     cout << "List after deleting 20: ";
//     list.display();

//     // Find node
//     int x = 30;
//     if (list.findNode(x))
//         cout << x << " found in the list." << endl;
//     else
//         cout << x << " not found." << endl;

//     return 0;
// }



struct Node {
    Node* prev;
    int data;
    Node* next;
};

Node* head = new Node();

// insert at beginning
void insertAtbeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL) head->prev = newNode; // update previous head's prev
    head = newNode;
}

// insert at end
void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL){
        newNode->prev = NULL;
        head = newNode;
        return;
    } 

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp; // link back to previous last node
}

// insert at specific position
void insertAtposition(int value, int pos) {
    Node* newNode = new Node();
    newNode->data = value;

    if(pos == 1 ){
        insertAtbeginning(value);
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
    newNode->prev = temp; // link back to previous node
    if (temp->next != NULL) temp->next->prev = newNode; // update next node's prev
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
    newNode->prev = prevNode; // link back to previous node
    if (prevNode->next != NULL) prevNode->next->prev = newNode; // update next node's prev
}

// delete the first node
void deleteFirstNode(){
    if (head == NULL) return;

    Node* temp = head;
    head = head->next;
    if (head != NULL) head->prev = NULL; // update new head's prev
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
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL; // unlink last node
    delete temp;
}

// delete at specific position
void deleteAtPosition(int pos){
    if (head == NULL) return;

    if (pos == 1) {
        deleteFirstNode();
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
    if (toDelete->next != NULL) toDelete->next->prev = temp; // update next node's prev
    delete toDelete;
}

// delete a node by value
void deleteNode(int value){
    if (head == NULL) return;

    if(head->data == value){
        Node* temp = head;
        head = head->next;
        if (head != NULL) head->prev = NULL; // update new head's prev
        delete temp;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL && temp->next->data != value){
        temp = temp->next;
    }

    if (temp->next == NULL) {
        cout << "Value not found!" << endl;
        return;
    }
    
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    if (toDelete->next != NULL) toDelete->next->prev = temp; // update next node's prev
    delete toDelete;
    
}

// display list forward
void display() {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// display list backward
void displayBackward() {
    Node* temp = head;
    if (!temp) return; // empty list

    // go to last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // traverse backward
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create 3 nodes
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data
    head->data = 5;   
    first->data = 10;
    second->data = 20;
    third->data = 30;

    // Connect nodes
    head->prev = NULL;
    head->next = first;
    first->prev = head;
    first->next = second;

    second->prev = first;
    second->next = third;

    third->prev = second;
    third->next = NULL;

    insertAtbeginning(4);
    display();
    insertAtEnd(5);
    display();
    insertAtposition(6, 3);
    display();
    insertAfterNode(first, 7);
    display();
    deleteFirstNode();
    display();
    deleteLastNode();
    display();
    deleteAtPosition(3);
    display();
    deleteNode(10);
    display();
    
    // Traversal forward
    // Node* temp = head;
    // cout << "Forward: ";
    // while (temp != NULL) {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    // cout << "\nBackward: ";
    // temp = third;
    // while (temp != NULL) {
    //     cout << temp->data << " ";
    //     temp = temp->prev;
    // }

    return 0;
}
