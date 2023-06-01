#include <bits/stdc++.h>
using namespace std ;

class Node {

    // Define a Node
    public:
    int data;
    Node* next;

    // Node(data) Constructor
    Node(int data){
        this-> data = data;
        this -> next = NULL;
    }

    //deconstuctor
    ~Node(){
        cout<< "Node with value "<< this->data << "is deleted"<<endl;
    }
};

void insertAthead( Node* &head ,Node* &tail , int data){

    // // S-1 : Create a Node
    // Node* newNode = new Node(data);

    // // S-2 : NewNode-> next == current Node
    // newNode -> next = head ;

    // // update head
    // if(head == NULL){
    //     // LL is empty , first node will now add
    //     tail=newNode;
    // }
    // // S-3 : head to newNode par le aao
    // head= newNode;

    if(head== NULL){

        Node* newNode = new Node(data);
        head= newNode;
        tail= newNode;
    }else{

        Node* newNode= new Node(data);
        newNode->next= head;
        head= newNode;
    }

};

void insertAtTail ( Node* &head , Node* &tail , int data){

    Node* newNode= new Node(data);

    // update tail
    if(tail== NULL){
        // first node will now add
        tail= newNode;
        head = newNode;
    }
    else {
        // LL is not empty
         tail -> next = newNode;
    }

    tail = newNode;

};

void insertAtPosition(int position ,int data ,Node* &head , Node* &tail){

        if(head==NULL){
            Node* newNode= new Node(data);
            head= newNode;
            tail= newNode;
            return;
        }

        // S-1 : Find the position of prev and curr
        if(position==0){
            insertAthead(head,tail,data);
            return ;
        }

        int i=1;
        Node* prev= head;
        while(i< position){
            prev= prev->next;
            i++;
        }

        Node* curr = prev->next;

        //S-2 : Create a Node
            Node* newNode= new Node(data);
        
        //S-3 :
        newNode->next= curr;

        //S-4
        prev->next= newNode;



};
void print ( Node* &head){

    Node* temp =head;
    while( temp != NULL){
        cout<< temp->data <<" ";
        temp= temp->next;
    }
};
int findLength(Node* &head){

    int len=0;
    Node* temp =head;

    while(temp!= NULL){
        temp= temp->next;
        len++;
    }
    return len;
};


void deleteNode(int position ,Node* &head, Node* &tail){

    if(head== NULL){
        cout<< " LL is empty"<<endl;
        return;
    }

    // delete first Node
    if(position==1){
        Node* temp =head;
        head= head->next;
        temp->next= NULL;
        delete temp;
    }

    // Delete Last node
    int len= findLength(head);
    if(position==len){
        // find prev
        int i=1;
        Node* prev= head;
        while(i<position){
            prev= prev-1;
            i++;
        }

        //s-2
        prev->next= NULL;

        //s-3
        Node* temp= tail;

        //s-4
        tail=prev;

        //s-5
        delete temp;
    }

    // Delete in Middle

    //s-1: find prev and curr
    int i=1;
    Node* prev =head;
    while(i<position-1){
        prev =prev->next;
        i++;
    }
    Node* curr= prev->next;

    // s-2 :
    prev->next= curr->next;
    //s-3
    curr->next= NULL;
    //s-4
    delete curr;

    
}

int main(){

    Node* head =NULL;
    Node* tail =NULL;

    insertAthead(head,tail ,20);
    insertAthead(head,tail ,30);
    insertAthead(head,tail ,40);
    insertAtTail(head, tail , 35);

    insertAtPosition(2,26, head, tail);

    deleteNode(1,head, tail);

    print(head);
}