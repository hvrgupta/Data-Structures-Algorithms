// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Node{
    int data;
  Node *next;
  Node *prev;
  Node(int x){
      data = x;
      next = prev = NULL;
  }
};

Node* deleteEnd(Node *head){
    if(head == NULL) return NULL;
    if(head->next == NULL) 
    {
        delete head;
        return NULL;
    }
    else{
        Node *curr = head;
        while(curr->next->next != NULL){
            curr = curr->next;
        }        
        curr->next = NULL;
        delete curr->next;
        return head;
    }
}

void printList(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main() {
    // Write C++ code here
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    
    head->next = second;
    second->prev = head;
    
    second->next = third;
    third->prev = second;
    
    head = deleteEnd(head);
    printList(head);
    return 0;
}