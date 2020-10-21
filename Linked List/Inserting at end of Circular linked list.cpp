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
    if(head == NULL)
        return;
    Node* p = head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(head !=p);
}

Node* insertEnd(Node *head,int x){
    Node* temp = new Node(x);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t;
        t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
    }
}

int main(){
    Node *head = NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    printList(head);
}

