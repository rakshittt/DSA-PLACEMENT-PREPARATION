#include <bits/stdc++.h>
using namespace std ;

class Node{

    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next =NULL;
    }
};

int main(){

    // Approach 1 : 
            // 1. Create a new LL = Reversed(LL);
            // 2. Then compare both LL and return result in Boolean form 
            // TC ->O(N) & SC -> O(N)
    
    // Approach 2 :
            // 1. Copy the LL data to a array
            // 2. In Array , use 2-pointer Method to compare 
            // TC->O(N) & SC->O(N) 

    // Approach 3 :
        // 1. Find middle of the LL
        // 2. reverse the next part of LL after mid of LL 
        // 3. Place pointer "temp" in head as well as after mid 
        // 4. Compare the LL 
        // TC->O(N) & SC->O(N)
}