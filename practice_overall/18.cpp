#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first;

void create(vector<int> v){
    node *t , *last ;
    first = new node;
    first->data = v[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
        t = new node;
        t->data = v[i];
        t->next = 0;
        last->next = t;
        last = t;
    }
}

void display(node *p){
  if(p!=NULL){
      cout<<p->data<<" ";
      display(p->next);
  }
}

// max or min 

int maximum(node *p){
   static int max=INT_MIN;
   if(p!=NULL){
       if(max<p->data)
          max=p->data;
       maximum(p->next);
   }
   return max;
}

// int min

int minimum(node *p){
    static int min=INT_MAX;
    if(p!=NULL){
        if(min>p->data)
            min=p->data;
        minimum(p->next);
    }
    return min;
}

// sum

int Sum(node *p){
    static int sum=0;
    if(p!=NULL){
        sum+=p->data;
        Sum(p->next);
    }
    return sum;
}

// search 

int Search(node *p , int x){
    static int i=0,y=-1;
     if(p!=NULL){
         if(p->data==x){
             y=i;
         }
         i++;
         Search(p->next , x);
     }
     return y;
}

int main(){
    vector<int> v;
    int n, a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }

    create(v);
    display(first);
    cout<<endl;

    cout<<maximum(first)<<endl;
    cout<<"minimum "<<minimum(first)<<endl;
    cout<<"sum"<<Sum(first)<<endl;
    cout<<"sum "<<Sum(first)<<endl;
    int x;
    cin>>x;
    cout<<Search(first , x)<<endl;
    int z;
    cin>>z;
    cout<<Search(first , z)<<endl;
    


}