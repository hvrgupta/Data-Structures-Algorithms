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

Node* insertEnd(Node* head, int data){
    Node *temp = new Node(data);
    Node *curr = head;
    if(head == NULL)
    {
        return temp;
    }

    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;

    return head;
}

void printList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
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

    head = insertEnd(head,40);
    printList(head);
}
