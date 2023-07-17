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
    ListNode *insertbeg(ListNode* head,int value) {
        ListNode* newnode = new ListNode(value);
        newnode->next = head;
        return newnode;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res=NULL;
        ListNode* rev1=NULL;
        ListNode* rev2=NULL;


        while(l1!=NULL) {
            rev1 = insertbeg(rev1, l1->val);
            l1 = l1->next;
        }

        while(l2!=NULL) {
            rev2 = insertbeg(rev2, l2->val);
            l2 = l2->next;
        }

        l1 = rev1;
        l2 = rev2;

        int sum=0;
        int count=0;
        while(l1!=NULL && l2!=NULL) {
            int sum=l1->val+l2->val+count;
            if(sum<10) {
                res=insertbeg(res, sum);
                count=0;
                l1=l1->next;
                l2=l2->next;
            }
            else {
                res=insertbeg(res, sum%10);
                count=1;
                l1=l1->next;
                l2=l2->next;
            }
        }

        if(l1==NULL && l2!=NULL) {
            while(l2!=NULL) {
                int sum=l2->val+count;
                if(sum<10) {
                    res = insertbeg(res, sum);
                    count = 0;
                    l2=l2->next;
                }
                else {
                    res = insertbeg(res, sum%10);
                    count=1;
                    l2=l2->next;
                }
            }
        }
        else if(l2==NULL && l1!=NULL) {
            while(l1!=NULL) {
                int sum=l1->val+count;
                if(sum<10) {
                    res = insertbeg(res, sum);
                    count=0;
                    l1=l1->next;
                }
                else {
                    res = insertbeg(res, sum%10);
                    count=1;
                    l1=l1->next;
                }
            }
        }

        if(l1==NULL && l2==NULL) {
            if(count==1) {
                res=insertbeg(res, count);
            }
        }

        return res;
    }
};
