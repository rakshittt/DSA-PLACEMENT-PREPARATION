#include <bits/stdc++.h>
using namespace std ;

class Node {

    // Define a Node
    public:
    int data;
    Node* next;


    // Node() Constructor
    Node(){
        this-> data = 0;
        this -> next = NULL;
    }

    // Node(data) Constructor
    Node(int data){
        this-> data = data;
        this -> next = NULL;
    }
};

void print ( Node * &head){

    Node* temp =head;
    while( temp != NULL){
        cout<< temp->data <<" ";
        temp= temp->next;

    }

};

int main(){

    // Create a Node first with value "0"
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* four = new Node(40);
    Node* five = new Node(50);

    first -> next = second;
    second -> next = third;
    third -> next = four;
    four -> next = five;

    cout<<"Printing the LL"<<endl;
    print(first);

    return 0;
}