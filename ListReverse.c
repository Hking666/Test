void Reverse(List *L){
   
    LNode *current, *pre, *pnext;
    //初始化
    current  = L -> next;
    pre = NULL;
    while(current != NULL){
 
      
        pnext = current -> next;
     
        current -> next = pre;
 
   
        pre = current;
        current = pnext;
    }
    return;
}
