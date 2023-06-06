// Given the head of a singly linked list, group all the nodes with odd values together followed by the nodes with even indices, and return the reordered list.

// The first node is considered odd, and the second node is even, and so on.

// Note that the relative order inside both the even and odd groups should remain as it was in the input.

// You must solve the problem in O(1) extra space complexity and O(n) time complexity.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
    
        ListNode* oddHead =new ListNode(-1);
        ListNode* evenHead= new ListNode(-1);

        ListNode* oddTail =oddHead;
        ListNode* evenTail= evenHead;

        ListNode* curr =head;

        while(curr != NULL){

            if(curr->val %2 != 0){
                // added to odd LL
                //take out the odd wali node
                        ListNode* temp = curr;
                        curr = curr -> next;
                        temp -> next = NULL;

                        //append the odd node in evenHead LL
                        oddTail -> next = temp;
                        oddTail = temp;
            }else{
                 // added to even LL
                //take out the even wali node
                        ListNode* temp = curr;
                        curr = curr -> next;
                        temp -> next = NULL;

                        //append the even node in evenHead LL
                        evenTail -> next = temp;
                        evenTail = temp;
            }
        }

        // Merge them
        // Remove dummy nodes first
        ListNode* temp= oddHead;
        oddHead= oddHead->next;
        temp->next =NULL;
        delete temp;

        temp= evenHead;
        evenHead= evenHead->next;
        temp->next= NULL;
        delete temp;

        // Join the LL
        if( oddHead != NULL && evenHead != NULL){
            oddTail->next = evenHead;
        }

        return oddHead;
    }
};