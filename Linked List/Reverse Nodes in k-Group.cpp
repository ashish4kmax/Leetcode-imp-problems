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
    ListNode* insertbeg(ListNode* head, int val) {
        ListNode* newnode = new ListNode(val);
        newnode->next = head;
        return newnode;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int>rev;
        ListNode* curr = head;
        while(curr!=NULL) {
            rev.push_back(curr->val);
            curr = curr->next;
        }

        int c=1;
        int count = rev.size()/k;
        reverse(rev.begin(),rev.begin()+k);

        int t = k;
        int i=1;
        while(c<count) {
            reverse(rev.begin()+(k*i),rev.begin()+(k*i+t));
            c++;
            i++;
        }

        ListNode* ans = NULL;
        ListNode* res = NULL;
        for(int i=0;i<rev.size();i++) {
            ans = insertbeg(ans, rev[i]);
        }

        while(ans!=NULL) {
            res = insertbeg(res, ans->val);
            ans = ans->next;
        }

        return res;
    }
};
