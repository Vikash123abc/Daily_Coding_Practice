#include<bits/stc++.h>
using namespace std;
 class TreeNode{
     public:
     int val;
     TreeNode *next;
 };
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)  return l2;
        else if(l2==NULL)  return l1;
     /*   ListNode* ans=NULL;
        if(l1->val<=l2->val)
        {
            ans=l1;
            ans->next=mergeTwoLists(l1->next,l2);
        }
        else
        {
            ans=l2;
            ans->next=mergeTwoLists(l1,l2->next);
        }
        return ans; */
      
        ListNode ans(INT_MIN);
        ListNode *temp=&ans;
        while(l1 && l2)
        {
            if(l1->val<l2->val)
            {
                temp->next=l1;
                l1=l1->next;
            }
            else
            {
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        temp->next=l1?l1:l2;
        return ans.next;
    }
};
 int main()
 {
  // Take input and covert it in linkedlist then do the operation
 }