#include<bits/stdc++.h>
using namespace std;
 
struct Node
{
    int root;
    Node* left;
    Node* right;
    Node(int item){
        root = item;
        left = NULL;
        right = NULL;
    }
};
 
 
// Insert Function
Node* insert(Node* node, int value)
{
    if(node == NULL){
        return new Node(value);
    }
 
    if(node->root == value){
        return node;
    }
 
    if(node->root < value){
        node->right = insert(node->right, value);
    }
 
    else{
        node->left = insert(node->left, value);
    }
 
    return node;
}
 
 
// Traverse Function
void inorder(Node* root){
 
    if(root != NULL){
        inorder(root->left);
        cout<< root->root << " ";
        inorder(root->right);
    }
}
 
 
// Search Function
Node* search(Node* node, int value)
{
    if (node == NULL) {
        cout << "Value not found in the binary tree." << endl;
        return NULL;
    }
 
    if (node->root == value) {
        cout << "Found: " << node->root << endl;
        return node;
    }
 
    if (value < node->root) {
        return search(node->left, value);  // Search in the left subtree
    } else {
        return search(node->right, value); // Search in the right subtree
    }
}
 
 
 
 
int main()
{
    Node* root = new Node(100);
    root = insert(root, 110);
    root = insert(root, 105);
    root = insert(root, 120);
    root = insert(root, 115);
    root = insert(root, 130);
    root = insert(root, 50);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 55);
    root = insert(root, 70);
 
    cout<< "Inorder Traversal: ";
    inorder(root);
 
    cout<< endl;
    Node* result = search(root, 75);
 
    if(result == NULL)
    {
        root = insert(root, 75);
        cout<< "\nInorder Traversal after inserting 75: \n";
        inorder(root);
    }
 
 
}
