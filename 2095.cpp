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
    int count(ListNode* head){
        int c=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        return c;
    }

    void del(ListNode* head, int n){ //deleting node at index n (0-indexed)
    ListNode* prev = head; 
    ListNode* temp = head->next; 
    while(n>0){
        prev = temp; 
        temp = temp->next; 
        n--;
        if(temp==nullptr) return; 
    }
    prev->next = temp->next; 
    delete temp; //freeing memory
}
    ListNode* deleteMiddle(ListNode* head) {
    int length = count(head);
    if(length == 0) return head; 
    if(length == 1) { 
        //delete head;
        return nullptr;
    }
    length /= 2;
    del(head, length - 1);
    return head;
}

};