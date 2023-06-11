// Solve question with TC ->O(1)
#include <bits/stdc++.h>
using namespace std ;

class Stack{

    public :
    vector <pair <int ,int> > st;

    void push(int val){
        if(st.empty()){
            pair <int,int> p = make_pair(val , val);
            st.push_back(p);
        }else{
            pair <int ,int> p;
            p.first =val;
            p.second = min( val , st.back().second); // st.back() -> define last elements
            st.push_back(p);
        }
    };

    void pop(){
        st.pop_back();
    }

    int top(){
      return st.back().first;
    }

    int getMin(){
        return st.back().second; 
    }
}

int main(){



}