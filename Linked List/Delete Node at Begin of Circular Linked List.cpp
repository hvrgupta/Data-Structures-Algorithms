#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *next;
    Node(int x){
    data = x;
    next = NULL;
    }
};

void printList(Node *head){
    if(head == NULL) {
            cout<<" ";
            return;
        }
    Node* p = head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(head !=p);
}

Node* deleteBeg(Node* head){
    Node *temp = head->next;
    if(head == NULL)
        return NULL;
    if(head->next == head){
        delete head;
        return NULL;
    }
    else{
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = head->next;
        delete head;
    }
    return temp->next;
}

int main(){
Node *head = new Node(10);
Node *second = new Node(20);
Node *third = new Node(30);

head->next = second;
second->next = third;
third->next = head;

head = deleteBeg(head);
printList(head);
}


