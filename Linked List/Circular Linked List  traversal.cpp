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
/*
    if(head == NULL){
        cout<<" ";
        return;
    }

    Node *curr = head;
    curr = curr->next;
    cout<<head->data<<" ";

    while(head != curr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

//FOR LOOP
if(head == NULL) return;
cout<<head->data<<" ";
for(Node *p = head->next;p!=head;p=p->next){
    cout<<p->data<<" ";
}
*/
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

int main(){
Node *head = new Node(10);
Node *second = new Node(20);
Node *third = new Node(30);

head->next = second;
second->next = third;
third->next = head;

printList(head);
}

