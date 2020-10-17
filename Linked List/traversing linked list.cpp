#include<bits/stdc++.h>
using namespace std;

/*
int main(){
    int *arr = new int[5];
    arr[0] = 1;
    cout<<arr[0];
}
*/

struct Node{
int data;
Node *next;
    Node(int x){
    data = x;
    next = NULL;
    }
};

void printList(Node *node){
    while(node != NULL){
        cout<<node->data<<endl;
        node = node->next;
    }
}

int main(){
Node *head = new Node(10);
Node *temp1 = new Node(20);
Node *temp2 = new Node(30);

head->next = temp1;
temp1->next = temp2;

printList(head);
}



