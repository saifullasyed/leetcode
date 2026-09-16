/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;  // node = 5 , so node value means '5' and node -> next -> val means 1 , Then it will changes like 4 ->[ 1 ]-> 1 -> 9 .
        node->next = node->next->next; // It means node = 1st ['1'] next means next '1' again next means '9' ,In this case it will ignore the second 1 . So the final OUTPUT is 4 -> 1-> 9
    }
};

// Time Complexity = O(1)
// Space Complexity = O(1)