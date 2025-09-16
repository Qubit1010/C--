//*  create binary tree with array

#include <iostream>
using namespace std;

// #define MAX 15 // Maximum number of nodes

// // Binary tree using array (1-based indexing for easy calculation)
// int tree[MAX];

// // Insert value at a given position
// void insert(int value, int position) {
//     if (position < MAX) {
//         tree[position] = value;
//     } else {
//         cout << "Position out of bounds!" << endl;
//     }
// }

// // Inorder traversal (recursive)
// void inorder(int index) {
//     if (index < MAX && tree[index] != 0) {
//         inorder(2 * index);         // left child
//         cout << tree[index] << " "; // root
//         inorder(2 * index + 1);     // right child
//     }
// }

// // Preorder traversal (recursive)
// void preorder(int index) {
//     if (index < MAX && tree[index] != 0) {
//         cout << tree[index] << " "; // root
//         preorder(2 * index);        // left child
//         preorder(2 * index + 1);    // right child
//     }
// }

// // Postorder traversal (recursive)
// void postorder(int index) {
//     if (index < MAX && tree[index] != 0) {
//         postorder(2 * index);       // left child
//         postorder(2 * index + 1);   // right child
//         cout << tree[index] << " "; // root
//     }
// }

// int main() {
//     // Initialize tree array with 0 (empty)
//     for (int i = 0; i < MAX; i++) tree[i] = 0;

//     // Example: create this tree
//     //        1
//     //      /   \
//     //     2     3
//     //    / \   /
//     //   4   5 6

//     insert(1, 1); // root
//     insert(2, 2); // left child of root
//     insert(3, 3); // right child of root
//     insert(4, 4); // left child of 2
//     insert(5, 5); // right child of 2
//     insert(6, 6); // left child of 3

//     cout << "Inorder Traversal: ";
//     inorder(1);
//     cout << endl;

//     cout << "Preorder Traversal: ";
//     preorder(1);
//     cout << endl;

//     cout << "Postorder Traversal: ";
//     postorder(1);
//     cout << endl;

//     return 0;

// }

//* create binary tree with linked representation

// Node structure for binary tree
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// // Create a new node
// Node* createNode(int value) {
//     Node* newNode = new Node;
//     newNode->data = value;
//     newNode->left = nullptr;
//     newNode->right = nullptr;
//     return newNode;
// }

// // Inorder traversal (Left, Root, Right)
// void inorder(Node* root) {
//     if (root != nullptr) {
//         inorder(root->left);
//         cout << root->data << " ";
//         inorder(root->right);
//     }
// }

// // Preorder traversal (Root, Left, Right)
// void preorder(Node* root) {
//     if (root != nullptr) {
//         cout << root->data << " ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// // Postorder traversal (Left, Right, Root)
// void postorder(Node* root) {
//     if (root != nullptr) {
//         postorder(root->left);
//         postorder(root->right);
//         cout << root->data << " ";
//     }
// }

// int main() {
//     // Example: create this tree
//     //        1
//     //      /   \
//     //     2     3
//     //    / \   /
//     //   4   5 6

//     Node* root = createNode(1);
//     root->left = createNode(2);
//     root->right = createNode(3);
//     root->left->left = createNode(4);
//     root->left->right = createNode(5);
//     root->right->left = createNode(6);

//     cout << "Inorder Traversal: ";
//     inorder(root);
//     cout << endl;

//     cout << "Preorder Traversal: ";
//     preorder(root);
//     cout << endl;

//     cout << "Postorder Traversal: ";
//     postorder(root);
//     cout << endl;

//     // Free memory (optional for small programs)
//     // In real applications, use a function to delete all nodes

//     return 0;
// }


//* create binary search tree with linked representation

// Node structure for BST
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create a new node
Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Insert a value into the BST
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    // If value == root->data, do not insert duplicates
    return root;
}

// Inorder traversal (Left, Root, Right)
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Preorder traversal (Root, Left, Right)
void preorder(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder traversal (Left, Right, Root)
void postorder(Node* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    Node* root = nullptr;

    // Insert nodes into BST
    int values[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    for (int val : values) {
        root = insert(root, val);
    }

    cout << "Inorder Traversal (BST): ";
    inorder(root);
    cout << endl;

    cout << "Preorder Traversal (BST): ";
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal (BST): ";
    postorder(root);
    cout << endl;

    // Free memory (optional for small programs)
    // In real applications, use a function to delete all nodes

    return 0;
}