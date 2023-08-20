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
    int gcd(int a,int b) {
        if(a==b) return a;
        if(a>b) {
            return gcd(a-b,a);
        }
        else {
            return gcd(a,b-a);
        }
    }

    ListNode* insertbeg(ListNode* head, int value) {
        ListNode* newnode = new ListNode(value);
        newnode->next = head;
        return newnode;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        ListNode* ans = NULL;
        ListNode* res = NULL;

        vector<int>temp;
        while(head!=NULL) {
            temp.push_back(head->val);
            head = head->next;
        }

        for(int i=0;i<temp.size()-1;i++) {
            ans = insertbeg(ans,temp[i]);
            ans = insertbeg(ans, gcd(temp[i],temp[i+1]));
        }

        ans = insertbeg(ans, temp[temp.size()-1]);

        while(ans!=NULL) {
            res = insertbeg(res, ans->val);
            ans = ans->next;
        }

        return res;
    }
};
