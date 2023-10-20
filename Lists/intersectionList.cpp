class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // find the lists lengths 
        ListNode* l1 = headA;
        ListNode* l2 = headB;
        int c1 = 0, c2 = 0;

        while(l1){
            l1 = l1->next;
            c1++;
        }
        while(l2){
            l2 = l2->next;
            c2++;
        }
        int dist = abs(c1 - c2);
        l1 = headA;
        l2 = headB;
        if(c1 > c2){
            // move the bigger list dist times
            while(dist > 0){
                l1 = l1->next;
                dist--;
            }
        }
        else if(c2  > c1){
            while(dist > 0){
                l2 = l2->next;
                dist--;
            }
        }
        // now move both the lists simultaneously
        while(l1 && l2){
            if(l1 == l2) return l1;
            else{
                l1 = l1->next;
                l2 = l2->next;
            }
        }

        return NULL;
    }
};