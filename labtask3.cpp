#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float cgpa;
    Student* left;
    Student* right;
};

// Function to create a new node
Student* createNode(int id, string name, float cgpa) {
    Student* newNode = new Student();
    newNode->id = id;
    newNode->name = name;
    newNode->cgpa = cgpa;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a node into the BST
Student* insert(Student* root, int id, string name, float cgpa) {
    if (root == nullptr) {
        return createNode(id, name, cgpa);
    }
    if (id < root->id) {
        root->left = insert(root->left, id, name, cgpa);
    } else if (id > root->id) {
        root->right = insert(root->right, id, name, cgpa);
    } else {
        cout << "Duplicate ID: " << id << ". Not inserting." << endl;
    }
    return root;
}

// In-order traversal
void inOrder(Student* root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << "ID: " << root->id << ", Name: " << root->name << ", CGPA: " << root->cgpa << endl;
        inOrder(root->right);
    }
}

// Pre-order traversal
void preOrder(Student* root) {
    if (root != nullptr) {
        cout << "ID: " << root->id << ", Name: " << root->name << ", CGPA: " << root->cgpa << endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Post-order traversal
void postOrder(Student* root) {
    if (root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);
        cout << "ID: " << root->id << ", Name: " << root->name << ", CGPA: " << root->cgpa << endl;
    }
}

// Function to search for a student by ID
Student* search(Student* root, int id) {
    if (root == nullptr || root->id == id) {
        return root;
    }
    if (id < root->id) {
        return search(root->left, id);
    }
    return search(root->right, id);
}

int main() {
    Student* root = nullptr;

    // Sample data insertion
    root = insert(root, 1, "Alice", 3.5);
    root = insert(root, 3, "Bob", 3.8);
    root = insert(root, 2, "Charlie", 3.6);
    root = insert(root, 5, "Diana", 3.9);
    root = insert(root, 4, "Eve", 3.7);

    // Traversals
    cout << "\nIn-order Traversal:" << endl;
    inOrder(root);

    cout << "\nPre-order Traversal:" << endl;
    preOrder(root);

    cout << "\nPost-order Traversal:" << endl;
    postOrder(root);

    // Search for a student
    int searchID;
    cout << "\nEnter ID to search: ";
    cin >> searchID;
    Student* result = search(root, searchID);
    if (result != nullptr) {
        cout << "Found: ID: " << result->id << ", Name: " << result->name << ", CGPA: " << result->cgpa << endl;
    } else {
        cout << "Student with ID " << searchID << " not found." << endl;
    }

    return 0;
}
