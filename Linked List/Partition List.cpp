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
    ListNode* insertbeg(ListNode* head, int value) {
        ListNode* newnode = new ListNode(value);
        newnode->next = head;
        return newnode;
    }

    ListNode* partition(ListNode* head, int x) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int>bx;
        ListNode* res = NULL;
    
        ListNode* curr = head;
        while(curr!=NULL) {
            if(curr->val<x) {
                bx.push_back(curr->val);
            }
            curr = curr->next;
        }

        curr = head;
        while(curr!=NULL) {
            if(curr->val>=x) {
                bx.push_back(curr->val);
            }
            curr = curr->next;
        }

        for(int i=bx.size()-1;i>=0;i--) {
            res = insertbeg(res, bx[i]);
        }

        return res;
    }
};
