#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    char data;
    Node *next;
    Node(char data){
        this->data=data;
        next=NULL;
    }
}*head= NULL;

void push(char x){
    Node *t = new Node(x);
    if(t==NULL){
        return ;
    }
    t->next=head;
    head=t;
}

void pop(){
    if(head==NULL) return ;
    head=head->next;
}

int empty(){
    if(head==NULL) return 1;
    return 0;
}

int top(){
    if(!empty()) return head->data;
    return -1;
}
void display(){
    Node *p=head;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

// balanced paranthes

int balanced(char *a){
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]=='(') {
            push(a[i]);
        }
        else if(a[i]==')'){
            if(empty()) return 0;
            pop();
        }
    }
    if(empty())
     return 1;
    return 0;
}

 bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(int i=0; x[i]!='\0'; i++){
            if(x[i]=='(' || x[i]=='{' || x[i]=='[')
              st.push(x[i]);
            else{
                if(st.empty())
                 return 0;
                char y = st.top();
                if((x[i] == ')' && y=='(' ) || (x[i]=='}' && y=='{') || (x[i]==']' && y=='['))
                  st.pop();
                else
                  return 0;
            }
        }
        return st.empty();
    }
int  main(){
    // push(3);
    // push(5);
    // push(6);
    // display();
    // pop();
    // display();
    // cout<<empty()<<endl;
    char *a=new char[100];
    cin>>a;
    cout<<a<<endl;
    cout<<balanced(a)<<endl;
}