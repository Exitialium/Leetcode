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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* head = ans;
        int carry = 0;
        ListNode* first = l1;
        ListNode* second = l2;
        while(first!= nullptr||second!=nullptr||carry==1){
            if(first==nullptr&&second==nullptr){
                ans -> val = 1;
                break;
            }
            if(first==nullptr){
                first = new ListNode();
            }
            if(second==nullptr){
                second= new ListNode();
            }
            int temp = first->val + second->val;
            if(carry){
                temp += 1;
                carry = 0;
            }
            if(temp>9){
                temp -= 10;
                carry = 1;
            }
            ans->val = temp;
            first = first -> next;
            second = second -> next;
            if(first!=nullptr||second!=nullptr||carry==1){
                ListNode* newNode = new ListNode();
                ans -> next = newNode;
                ans = newNode;
            }
        }
        return head;
    }
};