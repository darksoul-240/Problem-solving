#include <bits/stdc++.h>
using namespace std;

class Solution{//Floyd’s cycle-finding algorithm & fast-slow method
    public:
    struct ListNode {
    int val;
    ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
     bool hasCycle(ListNode *head) {
        ListNode *tortoise=head;
        ListNode *hare=head;
        if(head==nullptr)return false;
        while(hare->next!=nullptr&&hare->next->next!=nullptr){
            hare=hare->next->next;
            tortoise=tortoise->next;
            if(hare==tortoise)return true;
        }
        return false;
    }
};