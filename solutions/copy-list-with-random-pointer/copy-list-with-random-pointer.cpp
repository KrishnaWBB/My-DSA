/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)return NULL;
        unordered_map <Node* , Node*> mp;
        
        Node* old_temp = head -> next;
        Node* copy_head = new Node(head->val);
        Node* new_temp = copy_head;
        mp[head] = copy_head;
       
        
        while(old_temp != NULL){
            Node* copy = new Node(old_temp -> val);
            mp[old_temp] = copy;
            new_temp-> next = copy;
            old_temp = old_temp -> next;
            new_temp = new_temp -> next;
        }
        Node* oldtemp = head;
        Node* newtemp = copy_head;
        while(oldtemp != NULL){
            newtemp -> random = mp[oldtemp -> random];
            newtemp = newtemp -> next;
            oldtemp = oldtemp -> next;
        }
        return copy_head;
    }
};