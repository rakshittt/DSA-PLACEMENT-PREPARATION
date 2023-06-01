#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {

        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAthead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        // LL is empty
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
        
    }
    else
    {
        //LL is non - empty
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
};

void insertAttail(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        // LL is empty
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
        
    }
    else
    {
        //LL is non - empty
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
};

int getlength(Node* &head){

    int len=0;
    Node* temp =head;

    while(temp!= NULL){
        temp= temp->next;
        len++;
    }
    return len;
};


void insertAtposition(Node* &head, Node* &tail, int data , int position){
    
   
    if (head == NULL)
    {
        // LL is empty
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
        
    }else{

        // LL is not empty

        if(position == 1){
            insertAthead(head,tail ,data);
            return;
        }
        int len =getlength(head);

        if(position > len){
            insertAttail(head, tail , data);
            return ;
        }

        // insetion in middle
        // S-1 : find prevNode, currNode
        int i=1;
        Node* prevNode =head;
        while(i<position-1){
             prevNode= prevNode->next;
             i++;
         }
         Node* curr =prevNode->next;

         // S-2 :
         Node* newNode = new Node(data);

         //s-3
         prevNode->next= newNode;
         newNode->prev = prevNode;
         curr->prev = newNode;
         newNode->next = curr;
    }
}

void print(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
};



int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *head = first;
    Node *tail = third;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    print(first);
    cout<<endl;

    insertAthead(head, tail, 105);

    print(head);
    cout<<endl;

    insertAttail(head, tail, 501);

    print(head);
    cout<<endl;

    insertAtposition(head, tail , 352 ,4);

    print(head);


}
