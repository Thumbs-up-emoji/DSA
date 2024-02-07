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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
    int cnt=0, count = 0;
    // Traverse the linked list and count nodes
    while (temp != nullptr) {
        temp = temp->next;
        cnt++; // increment cnt for every node traversed
    }
    int mid=ceil(cnt/2);
    temp=head;
    while(temp!=nullptr) {
        if(count==mid) return temp;
        temp=temp->next;
        count++;
    }
    return head;
    }
};