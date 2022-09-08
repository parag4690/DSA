#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        //code here
        Node *p=head , *r , *q=NULL;
        int flag=1;
        while(p->next!=NULL){
            if(p->data!=p->next->data){
                r=p;
                p=p->next;
                flag=0;
            }
            else if (p->data==p->next->data && p->next!=NULL){
                p->next=p->next->next; 
                flag=1;
                
            }
            if(flag){
            //    q=r->next;
               r->next=r->next->next;
            }
          
        }
        cout<<r->data<<endl;
        cout<<p->data<<endl;
         if(flag){
             r->next=NULL;
         }
        return head;
    }
};
/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;


	while (T--)
	{
		int N;

		cin >> N ;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		Solution ob;
		head = ob.removeAllDuplicates(head);
		printList(head);

		cout << "\n";


	}
	return 0;
}
