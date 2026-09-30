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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int mini = INT_MAX;
       
        int cnt = 0;
        vector<int>v;
        if(head == NULL || head->next == NULL || head->next->next == NULL)return {-1, -1};
        ListNode* temp = head -> next;
        ListNode* prev = head;
        
        while(temp -> next != NULL){
            cnt++;
            if((temp->val > temp->next->val && temp->val > prev->val) ||
               (temp->val < temp->next->val && temp->val < prev->val)) {
                
                v.push_back(cnt);
            }

            temp = temp -> next;
            prev = prev -> next;
        }

        if(v.size() < 2)return {-1,-1};

        for(int i = 1 ; i< v.size() ; i++){
            mini = min(mini , v[i] - v[i-1]);
        }
       int maxi = v[v.size()-1]-v[0];

        return {mini , maxi};
    }
};