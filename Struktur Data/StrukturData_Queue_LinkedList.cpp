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

void enqueue(int n) {
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

void dequeue() {
    if (head == NULL) {
        cout << "Queue Kosong!";
        return;
    }

    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    node *p = head;
    while (p -> next != tail) {
        p = p -> next;
    }

    delete tail;
    tail = p;
    tail -> next = NULL;
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

    enqueue(10);
    display();
    enqueue(20);
    display();
    enqueue(30);
    display();
    dequeue();
    display();
    enqueue(40);
    display();
    enqueue(50);
    display();
    dequeue();
    display();
    dequeue();
    display();

    return 0;
}