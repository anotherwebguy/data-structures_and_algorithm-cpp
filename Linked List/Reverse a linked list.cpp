// Author Mohit
// Implementation of Singly linked list


#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node {
public:
    int data;
    Node* next;
    
    Node() {
        data = 0;
        next = NULL;
    }
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist {
    Node* head;
public:
    Linkedlist() {
        head = NULL;
    }
    
    void insertBegin(int);
    
    void insertEnd(int);
    
    void insertAfter(Node*, int);
    
    int deleteBegin();
    
    int deleteEnd();
    
    int deleteAfter(Node*);
    
    void printList();
    
    void reverseList();
    
};

void Linkedlist :: insertBegin(int data) {
    Node* temp = new Node(data);
    if(head == NULL) {
        head = temp;
    } else {
        temp->next = head;
        head = temp;
    }
}

void Linkedlist :: insertEnd(int data) {
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
    } else {
        Node* curr = head;
        while(curr->next!=NULL) curr = curr->next;
        curr->next = temp;
    }
}

void Linkedlist :: insertAfter(Node* prev,int data) {
    Node* temp = new Node(data);
    if(prev != NULL) {
        prev->next = temp;
    }
}

int Linkedlist :: deleteBegin() {
    Node* temp = head;
    if(head == NULL || head->next == NULL) {
        return 0;
    } else {
        int res = head->data;
        head = head->next;
        delete temp;
        return res;
    }
}

int Linkedlist :: deleteEnd() {
    if(head == NULL || head->next == NULL){
        return 0;
    } else {
        Node* curr = head;
        Node* prev = head;
        while(curr->next!=NULL) {
            prev = curr;
            curr = curr->next;
        }
        int res = curr->data;
        prev->next = NULL;
        delete curr;
        return res;
    }
}

int Linkedlist :: deleteAfter(Node* prev) {
    if(prev != NULL) {
        Node* temp = prev->next;
        prev->next = temp->next;
        int res = temp->data;
        delete temp;
        return res;
    } else return 0;
}

void Linkedlist :: printList() {
    Node* curr = head;
    cout<<"\nThe list contains: ";
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void Linkedlist :: reverseList(){
    Node *prev = NULL, *curr = head, *next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    
}

int main() {
    Linkedlist list;
    list.insertBegin(10);
    list.insertEnd(20);
    list.insertBegin(5);
    list.insertEnd(30);
    list.printList();
    list.deleteBegin();
    list.deleteEnd();
    list.printList();
    list.reverseList();
    list.printList();
    
    return 0;
}
