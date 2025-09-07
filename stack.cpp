#include <iostream>
using namespace std;

// Stack using Arrays

// #define MAX 5  // maximum size of stack

// class Stack {
//     int arr[MAX];
//     int top;

// public:
//     Stack() { top = -1; }

//     bool isEmpty() { return top == -1; }
//     bool isFull() { return top == MAX - 1; }

//     void push(int x) {
//         if (isFull()) {
//             cout << "Stack Overflow!\n";
//             return;
//         }
//         arr[++top] = x;
//     }

//     void pop() {
//         if (isEmpty()) {
//             cout << "Stack Underflow!\n";
//             return;
//         }
//         top--;
//     }

//     int peek() {
//         if (isEmpty()) {
//             cout << "Stack is empty!\n";
//             return -1;
//         }
//         return arr[top];
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Stack is empty!\n";
//             return;
//         }
//         cout << "Stack elements: ";
//         for (int i = top; i >= 0; i--)
//             cout << arr[i] << " ";
//         cout << endl;
//     }
// };

// int main() {
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     s.display();  // 30 20 10
//     cout << "Top element: " << s.peek() << endl;

//     s.pop();
//     s.display();  // 20 10

//     return 0;
// }


// Stack using Linked List  

// struct Node {
//     int data;
//     Node* next;
// };

// class Stack {
//     Node* top;

// public:
//     Stack() { top = nullptr; }

//     bool isEmpty() { return top == nullptr; }

//     void push(int x) {
//         Node* newNode = new Node;
//         newNode->data = x;
//         newNode->next = top;
//         top = newNode;
//     }

//     void pop() {
//         if (isEmpty()) {
//             cout << "Stack Underflow!\n";
//             return;
//         }
//         Node* temp = top;
//         top = top->next;
//         delete temp;
//     }

//     int peek() {
//         if (isEmpty()) {
//             cout << "Stack is empty!\n";
//             return -1;
//         }
//         return top->data;
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Stack is empty!\n";
//             return;
//         }
//         Node* temp = top;
//         cout << "Stack elements: ";
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     s.display(); // 30 20 10
//     cout << "Top element: " << s.peek() << endl;

//     s.pop();
//     s.display(); // 20 10

//     return 0;
// }

// // Function to insert at the beginning

// //  Node structure
// struct Node {
//     int data;
//     Node* next;
// };

// void insertAtBeginning(Node*& head, int value) {
//     Node* newNode = new Node;   // create new node
//     newNode->data = value;      // store value
//     newNode->next = head;       // point to old head
//     head = newNode;             // newNode becomes the new head
// }

// // Function to display linked list
// void displayList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL\n";
// }


// int main() {
//     Node* head = nullptr;
//     Node* temp = nullptr;
//     Node* newNode = nullptr;


//* Create linked list with 5 user inputs
//     for (int i = 0; i < 5; i++) {
//         newNode = new Node;
//         cout << "Enter value for node " << i + 1 << ": ";
//         cin >> newNode->data;
//         newNode->next = nullptr;


//         if (head == nullptr) {
//             head = newNode;
//             temp = head;
//         } else {
//             temp->next = newNode;
//             temp = newNode;
//         }
//     }


//     cout << "\nOriginal List: ";
//     displayList(head);


//* Insert new node at beginning
//     int newValue;
//     cout << "Enter value to insert at beginning: ";
//     cin >> newValue;
//     insertAtBeginning(head, newValue);


//     cout << "\nList after inserting at beginning: ";
//     displayList(head);


//     return 0;
// }

//* Insert at a Specific Position

// // Function to create a new node
// Node* createNode(int value) {
//     Node* newNode = new Node;
//     newNode->data = value;
//     newNode->next = nullptr;
//     return newNode;
// }

// // Function to insert at a specific position (1-based index)
// void insertAtPosition(Node*& head, int value, int position) {
//     Node* newNode = createNode(value);


//     // If inserting at the beginning
//     if (position == 1) {
//         newNode->next = head;
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     // Traverse to the node before the desired position
//     for (int i = 1; i < position - 1 && temp != nullptr; i++) {
//         temp = temp->next;
//     }


//     if (temp == nullptr) {
//         cout << "Position out of range!" << endl;
//         delete newNode; // avoid memory leak
//         return;
//     }


//     newNode->next = temp->next;
//     temp->next = newNode;
// }


//* Function to display the linked list
// void displayList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }


// int main() {
//     Node* head = nullptr;


//* Creating initial linked list with 5 elements
//     for (int i = 0; i < 5; i++) {
//         int value;
//         cout << "Enter value for node " << i + 1 << ": ";
//         cin >> value;
//         insertAtPosition(head, value, i + 1); // insert at the end
//     }


//     cout << "\nOriginal List: ";
//     displayList(head);


//     int value, position;
//     cout << "\nEnter value to insert: ";
//     cin >> value;
//     cout << "Enter position to insert at: ";
//     cin >> position;


//     insertAtPosition(head, value, position);


//     cout << "\nList after insertion: ";
//     displayList(head);


//     return 0;
// }



//* Reverse a Stack using Another Stack
// Node structure for linked list
// struct Node {
//     int data;
//     Node* next;
// };

// // Stack class using linked list
// class Stack {
// private:
//     Node* top;  // Pointer to top of stack

// public:
//     Stack() { top = nullptr; }

//     // Push operation
//     void push(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = top;
//         top = newNode;
//     }

//     // Pop operation
//     int pop() {
//         if (isEmpty()) {
//             cout << "Stack Underflow!" << endl;
//             return -1;
//         }
//         Node* temp = top;
//         int popped = top->data;
//         top = top->next;
//         delete temp;
//         return popped;
//     }

//     // Peek operation
//     int peek() {
//         if (isEmpty()) {
//             cout << "Stack is empty!" << endl;
//             return -1;
//         }
//         return top->data;
//     }

//     // Check if stack is empty
//     bool isEmpty() {
//         return top == nullptr;
//     }

//     // Display stack contents
//     void display() {
//         Node* current = top;
//         while (current != nullptr) {
//             cout << current->data << " ";
//             current = current->next;
//         }
//         cout << endl;
//     }
// };

// // Function to reverse stack using another stack
// void reverseStack(Stack &s1, Stack &s2) {
//     while (!s1.isEmpty()) {
//         int value = s1.pop();
//         s2.push(value);
//     }
// }

// int main() {
//     Stack stack1, stack2;

//     // Push elements into stack1
//     stack1.push(10);
//     stack1.push(20);
//     stack1.push(30);
//     stack1.push(40);

//     cout << "Original Stack (stack1): ";
//     stack1.display();

//     // Reverse stack1 into stack2
//     reverseStack(stack1, stack2);

//     cout << "Reversed Stack (stack2): ";
//     stack2.display();

//     return 0;
// }


//* Balanced Parentheses problem using a stack (linked list) step by step.
// Node structure for stack
// struct Node {
//     char data;
//     Node* next;
// };

// // Stack class using linked list
// class Stack {
// private:
//     Node* top;

// public:
//     Stack() { top = nullptr; }

//     void push(char value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = top;
//         top = newNode;
//     }

//     char pop() {
//         if (isEmpty()) {
//             return '\0'; // return null char if underflow
//         }
//         Node* temp = top;
//         char popped = top->data;
//         top = top->next;
//         delete temp;
//         return popped;
//     }

//     bool isEmpty() {
//         return top == nullptr;
//     }
// };

// // Helper function: check if two brackets match
// bool isMatchingPair(char open, char close) {
//     return (open == '(' && close == ')') ||
//            (open == '[' && close == ']') ||
//            (open == '{' && close == '}');
// }

// // Function to check balanced parentheses
// bool isBalanced(const string& expr) {
//     Stack s;

//     for (char ch : expr) {
//         if (ch == '(' || ch == '[' || ch == '{') {
//             s.push(ch); // push opening brackets
//         }
//         else if (ch == ')' || ch == ']' || ch == '}') {
//             if (s.isEmpty()) return false; // no matching open
//             char topChar = s.pop();
//             if (!isMatchingPair(topChar, ch)) return false;
//         }
//     }

//     return s.isEmpty(); // must be empty at the end
// }

// // Driver code
// int main() {
//     string expr1 = "((a+b)*c)";
//     string expr2 = "((a+b)";

//     cout << expr1 << " → " 
//          << (isBalanced(expr1) ? "Balanced" : "Not Balanced") << endl;

//     cout << expr2 << " → " 
//          << (isBalanced(expr2) ? "Balanced" : "Not Balanced") << endl;

//     return 0;
// }


//* Linked List with Capacity Limit
// Node structure
struct Node {
    int data;
    Node* next;
};

// Stack class (linked list implementation)
class Stack {
private:
    Node* top;
    int capacity;   // maximum stack size
    int count;      // current number of elements

public:
    // Constructor
    Stack(int size) {
        capacity = size;
        top = nullptr;
        count = 0;
    }

    // Push operation
    void push(int value) {
        if (count == capacity) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        count++;
        cout << value << " pushed to stack.\n";
    }

    // Pop operation
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop.\n";
            return -1;
        }
        Node* temp = top;
        int popped = temp->data;
        top = top->next;
        delete temp;
        count--;
        return popped;
    }

    // Peek operation
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;
        }
        return top->data;
    }

    // Check if empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack elements (top to bottom): ";
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    int size, choice, value;
    cout << "Enter stack size (capacity): ";
    cin >> size;

    Stack s(size);

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            value = s.pop();
            if (value != -1) cout << "Popped: " << value << endl;
            break;
        case 3:
            value = s.peek();
            if (value != -1) cout << "Top element: " << value << endl;
            break;
        case 4:
            s.display();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
