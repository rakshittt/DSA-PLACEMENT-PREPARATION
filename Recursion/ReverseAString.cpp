#include <iostream>
using namespace std ;

void reverseString( string &s , int start ,int end){

    if(start >= end){
        return;
    }

    swap(s[start], s[end]);

    reverseString(s,start+1,end-1);
    
}


int main(){

    string s;
    cout<< "Enter a string"<<endl;
    cin>>s;
    int len = s.size();
    cout<< s <<endl;
    reverseString(s,0, len-1);

    cout << s <<endl;
}