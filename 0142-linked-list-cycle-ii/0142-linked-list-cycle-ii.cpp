/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL||head->next==NULL) return NULL;
        ListNode *c = head, *f = head, *s = head;
        while(f->next!=NULL && f->next->next!=NULL){
            f=f->next->next;
            s=s->next;
            if(f==s){
                while(f!=c){
                    f=f->next;
                    c=c->next;
                }
                return c;
            }
        }
        return NULL;
    }
};