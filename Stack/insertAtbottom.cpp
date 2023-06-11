#include <bits/stdc++.h>
using namespace std ;

// class Stack{

//     public : 
     
//      int *arr;
//      int size;
//      int top ;

//      Stack(int size){
//         arr=new  int[size];
//         this->size= size;
//         top=-1;

//      };
// };

void solve(stack <int> &s , int target){

    if(s.empty()){
        s.push(target);
        return;
    }

    int topElement =s.top();
    s.pop();

    // Rec call
    solve(s,target);

    // backtrap
    s.push(topElement);
}

void insertAtbottom(stack <int> &s){


    if(s.empty()){
        cout<<"Stack is empty"<<endl;
        return;
    }

    int target= s.top();
    s.pop();

    solve(s,target);
}

int main(){

    stack <int> s;
    s.push(12);
    s.push(15);
    s.push(17);
   
   
   insertAtbottom(s);

   cout<<"Printing"<<endl;

   while( !s.empty()){
        cout<< s.top()<<endl;
        s.pop();
   }
   cout<<endl;


}