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

// This solution  is made using vectors + SLL concept but we have to do this only using SLL.
class Solution {
public:
    ListNode* insertbeg(ListNode* head,int value) {
        ListNode* newnode = new ListNode(value);
        newnode->next = head;
        return newnode;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans = NULL;
        vector<int>vals;
        for(int i=0;i<lists.size();i++) {
            while(lists[i]!=NULL) {
                vals.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }

        sort(vals.begin(),vals.end());
        reverse(vals.begin(),vals.end());

        for(int i=0;i<vals.size();i++) {
            ans = insertbeg(ans,vals[i]);
        }
        
        return ans;
    }
};
