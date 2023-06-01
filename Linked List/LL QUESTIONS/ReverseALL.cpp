#include <bits/stdc++.h>
using namespace std ;

int main(){
    // There are two methods to solve this question :

    // 1. Recursive Approach :
            // 1) Define Prev==NULL, head= curr , forward = curr->next
            // 2) curr->next = prev 
            // 4) BC : curr=NULL
            // 3) reverse(curr , forward) 
    // 2. Iteration Method :
            // 1) Define prev==NULL , curr= head , temp= curr ->next
            // 2) while(curr!=NULL ) : temp = curr->next ; curr->next
            // 3) prev=curr ; curr =forward 


    return 0;
}