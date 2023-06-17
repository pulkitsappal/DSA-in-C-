Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node *t1 = head;
 Node *t2 = head->next;
 
 while(t2!=NULL){
     if(t1->data!=t2->data){
        t1->next = t2;
        t1 = t1->next;
        t2 = t2->next;
     } else {
         t2 = t2->next;
     }
     
     if(t2==NULL) t1->next = NULL;
 }
 
 return head;
}
