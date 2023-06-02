#include <bits/stdc++.h>
using namespace std ;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data =data;
        this->next =NULL;
    }
};

bool isCircularLL(Node* &head){

    Node* temp = head;
    if(head == NULL){
        return false;
    }

    while(temp!= NULL && temp != head){
        temp=temp->next;
    }

    if(temp== NULL){
        return false;
    }
    if(temp= head){
        return true;
    }
//    return false;
}

int main(){

    Node* first= new Node(15);
    Node* second= new Node(5);
    Node* third= new Node(25);

    first->next = second;
    second->next = third;
    third->next =first;
    
    isCircularLL(first);
}