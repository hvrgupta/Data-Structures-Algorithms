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
   if(head == NULL)
    return NULL;
   if(head->next == NULL){
    delete head;
    return NULL;
   }
   else{
   head->data = head->next->data;
   Node* temp = head->next;
   head->next = head->next->next;
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
third->next = head;

head = deleteBeg(head);
printList(head);
}


