#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *next;
    Node(int x){
    data = x;
    next = NULL;
    }
}

Node* insertEnd(Node *head, int x){
    Node *temp = new Node(x);
    if(head == NULL){
    temp->next = NULL;
    return temp;
    }
    else{
        while(head->next!=NULL){
            head = head->next;
        }
        head->next = temp;
        temp->next = NULL;
        return head;
    }

}

int main(){
int x = 40;
Node *head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);

head = insertEnd(head,x);
}
