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
    ListNode* insertbeg(ListNode* head,int value) {
        ListNode* newnode = new ListNode(value);
        newnode->next = head;
        return newnode;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        list<int>ans;
        vector<int>vals;
        for(int i=0;i<lists.size();i++) {
            while(lists[i]!=NULL) {
                ans.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        ans.sort();
        ans.reverse();
        ListNode* finalans = NULL;
        for (auto itr = ans.begin(); itr != ans.end(); itr++)
            finalans = insertbeg(finalans, *itr);
        return finalans;
    }
};
