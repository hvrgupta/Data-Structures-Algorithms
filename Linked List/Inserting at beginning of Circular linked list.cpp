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

Node* insertBeg(Node *head,int x){
    Node *temp = new Node(x);
    temp->next = head;
    head->next = temp;
    return temp;
}

int main(){
    Node *head = NULL;
    Node *temp1 = insertBeg(head,10);
    Node *temp2 = insertBeg(head,20);
    Node *temp3 = insertBeg(head,30);
    printList(head);
}
