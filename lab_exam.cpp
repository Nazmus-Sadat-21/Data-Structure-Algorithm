#include<iostream>
using namespace std;
struct node{
    int root;
    node* left;
    node* right;
    node (int item){
        root  =item;
        left = nullptr;
        right = nullptr;
    }

};

node * insertion(node* root ,int value){

    if(root == nullptr){
        return new node(value);
    }
    else if(root->root == value){
        return root;

    }
    else if(value>root->root){
        root->right=insertion(root->right,value);
    }
    else{
        root->left = insertion(root->left,value);
    }
    return root;

}

void preorder(node* root){
    if(root!=nullptr){
        cout<<root->root<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node* root){
    if(root!=nullptr){
        inorder(root->left);
        cout<<root->root<<" ";
        inorder(root->right);
    }
}

node* findMin(node* root){
    while(root!=nullptr){
        root = root->left;
    }
    return root;
}

node* deleteNode(node* root, int key) {
    if (root == nullptr) {
        return root;
    }


    if (key < root->root) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->root) {
        root->right = deleteNode(root->right, key);
    } else {
        
        if (root->left == nullptr) {
            node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            node* temp = root->left;
            delete root;
            return temp;
        }

        
        node* temp = findMin(root->right); 
        root->root = temp->root;             
        root->right = deleteNode(root->right, temp->root); 
    }
    return root;
}




int main(){

    node*root = new node(50);
    root = insertion(root,70);
    root = insertion(root,60);
    root = insertion(root,20);
    root = insertion(root,90);
    root = insertion(root,10);
    root = insertion(root,40);
    root = insertion(root,100);
    cout<<"Preorder = ";
    preorder(root);
    cout<<endl;
    root = insertion(root,35);
    cout<<"After adding 35 in BST = ";
    preorder(root);
    cout<<endl;
    cout<<"After deleting 100  = ";
    root = deleteNode(root,100);
    inorder(root);


}
