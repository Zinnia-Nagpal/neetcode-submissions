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
    ListNode* reverseList(ListNode* head) {
      ListNode* curr = head; // 0 // 1
      ListNode* prev = nullptr;  // null 
     while(curr != nullptr){
        ListNode* next = curr -> next; // 1 // 2
        curr-> next = prev; // 0-> null // 1->0
        prev = curr; // prev = 0 // prev = 1
        curr = next; // 1 ,2     1-> 2-> 3 -> 0-> null  , 2-> 3-> 1
     }

return prev;



     }  
    };

