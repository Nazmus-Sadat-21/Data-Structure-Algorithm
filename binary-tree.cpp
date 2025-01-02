#include<iostream>
using namespace std;

struct Node{

    int root;
    Node* left ;
    Node* right ;
    Node (int item){
        root = item;
        left = nullptr;
        right = nullptr; 

    }

};

Node* insertion(Node* node , int value){
    if(node == nullptr){
        return new Node(value);
    }
    else if(node->root==value){
        return node;
    }
    else if(node->root<value){
        node->right=insertion(node->right,value);
    }
    else{
        node->left=insertion(node->left,value);
    }
    return node;
}

void inorder(Node* root){
    if(root!=nullptr){
        inorder(root->left);
        cout<<root->root<<" ";
        inorder(root->right);
    }
}

void preorder(Node* root){
    if(root!=nullptr){
        preorder(root->left);
        preorder(root->right);
        cout<<root->root<<" ";
        
    }
}

void postorder(Node* root){
    if(root!=nullptr){
        cout<<root->root<<" ";
        postorder(root->left);
        postorder(root->right);
       
        
    }
}

int main(){

    Node* root  = new Node(50);
    root  = insertion(root,30);
    root  = insertion(root,90);
    root  = insertion(root,40);
    root  = insertion(root,10);
    root  = insertion(root,100);
    root  = insertion(root,0);
    root  = insertion(root,5);

    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder : ";
    postorder(root);
    


}
