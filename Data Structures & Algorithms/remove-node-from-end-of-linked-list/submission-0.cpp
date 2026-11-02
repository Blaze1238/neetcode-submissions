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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode * temp = head;

        while(temp != NULL){
            length++;
            temp = temp->next;
        }

        ListNode* l = NULL;
        ListNode* r = head;

        int i = 0;
        int pos = length - n;

        if(head->next == NULL) return NULL;
        while(i != pos){
            i++;
            l = r;
            r = r->next;
        }

        if(i == 0){
            head = head->next;
        }
        else if( i == length){
            l->next = NULL;
        }
        else
            l->next = r->next;

        return head;
    }
};
