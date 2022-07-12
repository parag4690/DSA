#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first;
void create(int *a , int n){
    node *t , *last;
    first=new node;
    first->data=a[0];
    first->next = NULL;
    last = first;
    //
    for(int i=1; i<n; i++){
        t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last = t;
    }
}



void display(node *p ){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int count(node *p){
    static int c=0;
    if(p==NULL){
        // c++;
        return c;
    }
    else{  
         c++;
         return count(p->next);
    }
}

void sorted(node *p){
     int x = INT_MIN;
    bool check=1;
    // cout<<count(p)<<endl;
    while(p!=NULL){
        if(p->data>x){
            x=p->data;
       

        }
        else{
            check=0;
            cout<<"NOT SORTED"<<endl;
            break;
            
        } 
        p=p->next;
    }
    if(check){
        cout<<"SORTED"<<endl;
    }
}

int main(){
    int a[]={6,2,3,5};
    create(a , 4);
    display(first);
    sorted(first);
 
}