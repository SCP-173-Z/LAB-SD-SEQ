/*
================================================================================================
Tree

Data structure that is organized with hierarchy structure.

In-Order: Left, Root, Right
Pre-Order: Root, Left, Right
Post-Order: Left, Right, Root
================================================================================================
*/

#include <iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};

node* root = NULL;

void addNode(node** root, int value) {
    if(*root == NULL) {
        node* n = new node;
        n -> data = value;
        n -> left = NULL;
        n -> right = NULL;
        *root = n;
    }
}

void inOrder(node* root) {
    if(root != NULL) {
        inOrder(root -> left);
        cout << root -> data << " ";
        inOrder(root -> right);
    }
}

void preOrder(node* root) {
    if(root != NULL) {
        cout << root -> data << " ";
        preOrder(root -> left);
        preOrder(root -> right);
    }    
}

void postOrder(node* root) {
    if(root != NULL) {
        postOrder(root -> left);
        postOrder(root -> right);
        cout << root -> data << " ";
    }
}

int main() {
    system("cls");

    addNode(&root, 15);
    addNode(&root -> left, 27);
    addNode(&root -> right, 30);
    addNode(&root -> left -> left, 25);
    addNode(&root -> left -> right, 29);

    cout << "Pre-Order Traversal: ";
    preOrder(root);
    cout << endl;

    cout << "In-Order Traversal: "; 
    inOrder(root);
    cout << endl;

    cout << "Post-Order Traversal: "; 
    postOrder(root);
    cout << endl;

    return 0;
}