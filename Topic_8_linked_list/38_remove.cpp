Node *removeDuplicates(Node *head)
{
 // your code goes here
 if(head==NULL || head->next == NULL)
  return head;
 Node *p = head , *q=head;
 while(p->next!=NULL){

     if(p->data!=q->data){
         q->next = p;
         q=p;
     }
     p=p->next;
 }
 if(q->data == p->data ){
     q->next = NULL;
 }
 else{
     q->next = p;
 }
 return head;
}
