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

int searchLL(Node *head,int x){
    int pos = 0;
    Node *curr = head;
    while(curr != NULL){
        pos++;
        if(curr->data == x)
            return pos;
        curr = curr->next;
    }
    return -1;
}

int main(){
Node *head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);

int position = searchLL(head,10);
cout<<"Position : "<<position;
}

