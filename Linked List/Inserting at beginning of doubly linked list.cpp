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

Node* insertBegin(Node *head,int x){
    Node *temp = new Node(x);
    temp->next = head;
    if(head != NULL)
        head->prev = temp;
    return temp;
}
void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main(){
Node *head = NULL;
head = insertBegin(head,10);
head = insertBegin(head,20);
head = insertBegin(head,30);
printList(head);
}
