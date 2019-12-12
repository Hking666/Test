struct ListNode* removeElements(struct ListNode* head, int val){

        struct ListNode* p =  head;

        struct ListNode* q = head;
        if(head==NULL)
                return (struct ListNode*)NULL;
        while(q)
        {

           if(head->val == val)
           {
               head = head->next;
               p = head;
               q = head;
               continue;
           }
           q = p->next;
           if(q==NULL)
           {
               return head;
           }

           if(q->val == val)
           {
               q = q->next;
               p->next = q;
           }
           else
           {
               p = q;
               q = q->next;
           }


        }
        return head;
}
