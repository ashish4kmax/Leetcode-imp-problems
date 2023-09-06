// Naive Soln O(n^2):-
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
    ListNode* insertend(ListNode* head, int value) {
        ListNode* newnode = new ListNode(value);
        if(head==NULL) {
            return newnode;
        }
        else {
            ListNode* curr = head;
            while(curr->next!=NULL) {
                curr = curr->next;
            }
            curr->next = newnode;
            newnode->next = NULL;
            return head;
        }
    }

    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<ListNode*> res;
        ListNode* curr = head;

        int count = 0;
        while(curr) {
            curr = curr->next;
            count++;
        }

        curr = head;
        // calculation purposes
        int size = (count)/k;
        int maxis = count%k;
        int it=0;

        if(size==0) {
            int it=0;
            while(curr) {
                ListNode* newnode = new ListNode(curr->val);
                res.push_back(newnode);
                curr = curr->next;
                it++;
            }

            while(it<k) {
                ListNode* newnode = NULL;
                res.push_back(newnode);
                it++;
            }
        }
        else {
            ListNode* temp = NULL;
            while(curr) {
                if(it==size) {
                    if(curr!=NULL && maxis>0) {
                        temp = insertend(temp, curr->val);
                        curr = curr->next;
                        res.push_back(temp);
                        temp = NULL;
                        maxis--;
                    }
                    else {
                        res.push_back(temp);
                        temp = NULL;
                    }
                    it=0;
                }    
                temp = insertend(temp, curr->val);
                curr = curr->next;
                it++;
            }
            res.push_back(temp);        
        }

        return res;
    }
};

/* Optimal soln:-
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
/*class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        // Create a vector of ListNode pointers to store the k parts.
        vector<ListNode*> parts(k, nullptr);

        // Calculate the length of the linked list.
        int len = 0;
        for (ListNode* node = root; node; node = node->next)
            len++;

        // Calculate the minimum guaranteed part size (n) and the number of extra nodes (r).
        int n = len / k, r = len % k;

        // Initialize pointers to traverse the linked list.
        ListNode* node = root, *prev = nullptr;

        // Loop through each part.
        for (int i = 0; node && i < k; i++, r--) {
            // Store the current node as the start of the current part.
            parts[i] = node;
            // Traverse n + 1 nodes if there are remaining extra nodes (r > 0).
            // Otherwise, traverse only n nodes.
            for (int j = 0; j < n + (r > 0); j++) {
                prev = node;
                node = node->next;
            }
            // Disconnect the current part from the rest of the list by setting prev->next to nullptr.
            prev->next = nullptr;
        }

        // Return the array of k parts.
        return parts;
    }
};
*?
*/
