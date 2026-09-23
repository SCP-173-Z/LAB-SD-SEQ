/*
================================================================================================
Linked List

Linear Data Structure that uses Node struct, containing value and pointer reference to the
next node.
================================================================================================
*/

#include <iostream>
using namespace std;

struct node {
    int value;
    node *next;
};

node *head = NULL;
node *tail = NULL;

void push(int n) {
    node *newNode = new node;
    newNode -> value = n;
    newNode -> next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        newNode -> next = head;
        head = newNode;
    }
}

void pop() {
    if (head == NULL) {
        cout << "List Kosong!";
        return;
    }

    node *temp = head;
    head = head -> next;
    if (head == NULL) tail = NULL;
    delete temp;
}

void display() {
    node *temp = head;
    cout << "Isi linked list: ";
    while (temp != NULL) {
        cout << temp -> value << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main() {
    system("cls");

    push(10);
    display();
    push(20);
    display();
    push(30);
    display();
    pop();
    display();
    push(40);
    display();
    pop();
    display();
    pop();
    display();
    push(50);
    display();

    return 0;
}