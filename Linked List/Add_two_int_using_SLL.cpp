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
    ListNode* insertend(ListNode* res,int value) {
        ListNode* newnode=new ListNode(value);
        if(res==NULL) {
            return newnode;
        }
        else {
            ListNode* curr=res;
            while(curr->next!=NULL) {
                curr=curr->next;
            }
            curr->next=newnode;
            return res;
        }
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res=NULL;
        int sum=0;
        int count=0;
        while(l1!=NULL && l2!=NULL) {
            sum+=l1->val+l2->val;
            if(sum<10) {
                res=insertend(res, sum);
                l1=l1->next;
                l2=l2->next;
                sum=0;
            }
            else {
                res=insertend(res, sum%10);
                count=1;
                sum=0;
                sum+=count;
                l1=l1->next;
                l2=l2->next;
            }
        }

        if(l1==NULL && l2!=NULL) {
            while(l2!=NULL) {
                sum+=l2->val;
                if(sum<10) {
                    res = insertend(res, sum);
                    sum=0;
                    l2=l2->next;
                }
                else {
                    res = insertend(res, sum%10);
                    sum=0;
                    count=1;
                    sum+=count;
                    l2=l2->next;
                }
            }

            // if(sum==1) {
            //     res=insertend(res, sum);
            // }
        }

        else if(l2==NULL && l1!=NULL) {
            while(l1!=NULL) {
                sum+=l1->val;
                if(sum<10) {
                    res = insertend(res, sum);
                    sum=0;
                    l1=l1->next;
                }
                else {
                    res = insertend(res, sum%10);
                    sum=0;
                    count=1;
                    sum+=count;
                    l1=l1->next;
                }
            }

            // if(sum==1) {
            //     res=insertend(res, sum);
            // }
        }

        if(l1==NULL && l2==NULL) {
            if(sum==1) {
                res=insertend(res, sum);
            }
        }

        return res;
    }
};
