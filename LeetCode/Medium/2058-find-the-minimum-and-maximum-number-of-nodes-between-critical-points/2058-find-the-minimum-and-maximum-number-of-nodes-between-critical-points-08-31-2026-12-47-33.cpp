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
        if(head==NULL || head->next==NULL || head->next->next==NULL) return {-1,-1};

        ListNode* prev= head;
        ListNode*curr = head->next;
        int index =1;

        int firstIndex = -1 , prevCriticalIndex=-1;
        int minDistance = INT_MAX;

        while(curr->next){
            ListNode* nextnode = curr->next;

            bool islocalMaxima = (curr->val > prev->val) && (curr->val> nextnode->val);
            bool islocalMinima = (curr->val < prev->val) && (curr->val<nextnode->val);

            if(islocalMaxima || islocalMinima){
                if(firstIndex==-1){
                    firstIndex=index;
                }else{
                    minDistance =  min(minDistance,index-prevCriticalIndex);
                }
                prevCriticalIndex=index;
            }
            prev=curr;
            curr=nextnode;
            index++;
        }

        if(minDistance==INT_MAX) return {-1,-1};

        int maxDistance = prevCriticalIndex - firstIndex;
       return {minDistance, maxDistance};
    }
};