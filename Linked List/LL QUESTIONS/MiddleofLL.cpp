#include <bits/stdc++.h>
using namespace std;

int main()
{
    // There are two methods to solve this question :

    // 1. Basic Approach TC O(N):
    // 1) Find Length of LL
    // 2) for even mid: len/2 ; for else mid : (len+1)/2
    // 4) Print the Len(mid)

    // 2. Optimize Approach TC O(N/2) :
    // 1) Define slow and fast , pointed towards the head of the LL
    // 2) Slow will move 1 step at a time while Fast move 2 steps at a time
    // 3)  while(fast!=NULL && fast->next!=NULL)
    //      {
    //        slow=slow->next;
    //        fast=fast->next->next;
    //      }

    return 0;
}