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
    int pairSum(ListNode* head) {
        int n=0;
        ListNode *temp=head;
        vector<int> ans(n);
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
            n++;
        }

        int max_sum=0;

        for(int i=0;i<n/2;i++){
            max_sum=max(max_sum,ans[i]+ans[n-i-1]);
        }
    return max_sum;
    }
};