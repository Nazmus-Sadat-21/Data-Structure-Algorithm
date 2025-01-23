#include <iostream>
#include <string>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int key) {
    Node* newNode = new Node();
    newNode->key = key;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a node into the BST
Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return createNode(key);
    }
    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }
    return root;
}

// Function to find the minimum value node in a subtree
Node* findMin(Node* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the BST
Node* deleteNode(Node* root, int key) {
    if (root == nullptr) {
        return root;
    }

    // Traverse the tree to find the node to delete
    if (key < root->key) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->key) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with zero or one child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children
        Node* temp = findMin(root->right); // Find the in-order successor
        root->key = temp->key;             // Replace the value with the successor's value
        root->right = deleteNode(root->right, temp->key); // Delete the successor
    }
    return root;
}

// In-order traversal to display the BST
void inOrder(Node* root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->key << " ";
        inOrder(root->right);
    }
}

int main() {
    Node* root = nullptr;

    // Insert nodes into the BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    // root = insert(root, 60);
    // root = insert(root, 80);

    cout << "Initial BST (In-order traversal):" << endl;
    inOrder(root);
    cout << endl;

    // Case 1: Deleting a leaf node (e.g., 20)
    cout << "\nDeleting leaf node 20:" << endl;
    root = deleteNode(root, 20);
    inOrder(root);
    cout << endl;

    // Case 2: Deleting a node with one child (e.g., 30)
    cout << "\nDeleting node 30 with one child:" << endl;
    root = deleteNode(root, 30);
    inOrder(root);
    cout << endl;

    // Case 3: Deleting a node with two children (e.g., 50)
    cout << "\nDeleting node 50 with two children:" << endl;
    root = deleteNode(root, 50);
    inOrder(root);
    cout << endl;

    return 0;
}
