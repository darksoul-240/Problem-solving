#include <bits/stdc++.h>
using namespace std;

class Solution{
public:   
    struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode* fast=&dummy;
        ListNode* slow=&dummy;
        for(int i=0;i<n+1;i++){
            fast=fast->next;//moving n+1 from dummy to the nth index(if indexing from 1 for LL i.e dummy to val=3 in 1st case) 
        }
        while(fast){
            fast=fast->next;
            slow=slow->next;//stops slow a node before the nth from back node
        }
        //Basically, fast guides us to the nth node from back, by already taking n steps in LL, then let remaining be x of the total t, then we can say that slow will travel x steps i.e t-n, or nth from back as t-x=n.
        ListNode* to_delete=slow->next;
        slow->next=to_delete->next;
        delete(to_delete);
        return dummy.next;
    }
   
   
};