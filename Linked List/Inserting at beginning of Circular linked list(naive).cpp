//O(N) Solution

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

Node* insertBeg(Node *head,int x){
    Node *temp = new Node(x);
    if(head == NULL){
        temp->next=temp;
    }
    else{
        Node* curr = head;
        while(curr->next != head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

int main(){
    Node *head = NULL;
    head = insertBeg(head,10);
    head = insertBeg(head,20);
    head = insertBeg(head,30);
    printList(head);
}
