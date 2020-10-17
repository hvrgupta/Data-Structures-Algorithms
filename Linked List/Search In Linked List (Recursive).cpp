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
/*
int searchLL(Node *head,int x,int pos){
    Node *curr = head;
    pos++;
    if(curr->data == x) return pos;
    if(curr->next == NULL) return -1;
    searchLL(curr->next,x,pos);
}
*/

int searchLL(Node *head,int x){
if(head == NULL) return -1;
if(head->data == x)
    return 1;
else{
    int res = searchLL(head->next,x);
    if(res == -1) return -1;
    else return (res+1);
}
}

int main(){
Node *head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);

int position = searchLL(head,20);
cout<<"Position : "<<position;
}


