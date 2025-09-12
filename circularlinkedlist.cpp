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
    if(head == NULL){
        head = newNode;
        newNode->next = head;  
        return;
    }

    Node* temp = head;
    while(temp->next != head){
        temp=temp->next;
    }

    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

// insert at end
void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;

    if (head == NULL){
        head = newNode;
        newNode->next = head;  
        return;
    } 

    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = newNode;
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
    for(int i = 1; i < pos - 1 && temp->next != head; i++){
        temp = temp->next;
    }

    if (temp->next == head) {
        cout << "Position out of range!" << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// insert after a given node
void insertAfterNode(Node* prevNode, int value){
    if (prevNode == NULL) {
        cout << "Previous node cannot be NULL" << endl;
        return;
    }
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// delete first node
void deleteFirstNode(){
    if (head == NULL) return;

    if (head->next == head) { // only one node
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    Node* toDelete = head;
    head = head->next;
    temp->next = head;
    delete toDelete;
}

// delete last node
void deleteLastNode(){
    if (head == NULL) return;

    if (head->next == head) { // only one node
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next->next != head) {
        temp = temp->next;
    }

    Node* toDelete = temp->next;
    temp->next = head;
    delete toDelete;
}

// delete a node at a specific position
void deleteAtPosition(int pos){
    if (head == NULL) return;

    if (pos == 1) {
        deleteFirstNode();
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    if (temp->next == head) {
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
        deleteFirstNode();
        return;
    }

    Node* temp = head;
    while(temp->next != head && temp->next->data != value){
        temp = temp->next;
    }

    if (temp->next == head) {
        cout << "Value not found!" << endl;
        return;
    }
    
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
    
}

void display() {
    Node* temp = head;

    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    }while (temp != head);
    cout << " " << endl;
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
    second->next = head;

    insertAtbeginning(4);
    display();
    insertAtEnd(5);
    display();
    insertAtposition(6, 3);
    display();
    insertAfterNode(first, 7);
    display();
    deleteFirstNode();
    deleteNode(2);
    deleteAtPosition(3);
    display();
       
    return 0;
}