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
        unordered_map<Node*,Node*> map; 

        Node* temp = head;

        Node* newTemp = new Node(0);

        Node* newHead = newTemp;

        int i = 0;

        while(temp != NULL){
            Node* newNode = new Node(temp->val);
            newTemp->next= newNode;
            map[temp] = newNode;
            newTemp = newTemp->next;
            temp = temp->next;
        }

        newTemp = newHead->next;
        temp = head;

        while(temp!=NULL){
            if(temp->random == NULL){
                newTemp->random = NULL;
            }else{
                newTemp->random = map[temp->random];
            }
            temp = temp->next;
            newTemp = newTemp->next;
        }
        return newHead->next;
    }
};
