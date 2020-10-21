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

Node* deleteK(Node* head,int k){
    if(head == NULL){
        return head;
    }
    if(k == 1){
      //  deleteBeg(head);
    }
    Node *curr = head;
    for(int i=0;i<k-2;i++){
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

int main(){
Node *head = new Node(10);
Node *second = new Node(20);
Node *third = new Node(30);

head->next = second;
second->next = third;
third->next = head;

head = deleteK(head,3);
printList(head);
}



