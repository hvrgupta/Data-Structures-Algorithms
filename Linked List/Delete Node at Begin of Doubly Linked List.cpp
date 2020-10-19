#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data = x;
        next = prev = NULL;
    }
};

void printList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

Node* delHead(Node* head){
    if(head == NULL)
        return NULL;
    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else{
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    return head;
    }
}

int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next = second;
    second->next = third;

    second->prev = head;
    third->prev = second;

    head = delHead(head);

    printList(head);
}
