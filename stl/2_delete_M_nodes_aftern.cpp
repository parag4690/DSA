Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    Node *head1=NULL , *t , *last;
    if(M==0) return head1;
    if(N==0 || head==NULL) return head;
    Node *p=head;
    int flag=0 , i;
    t=new Node(p->data);
    head1=t;
    last=t;
    p=p->next;
    while(p){
        if(flag) i=0;
        else i=1;
        for(;i<M && p!=NULL;  i++){
            t=new Node(p->data);
            last->next=t;
            last=t;
            p=p->next;
        } flag=1;
        for(int i=0; i<N  && p!=NULL; i++){
            p=p->next;
        }
    }
    return head1;
}