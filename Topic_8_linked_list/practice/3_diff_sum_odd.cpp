#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first = NULL;

void create(vector<int> v){
    first = new node;
    node *t , *last;
    first->data = v[0];
    first->next=NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
        t = new node;
        t->data = v[i];
        t->next= NULL;
        last ->next = t;
        last = t;
    }
}



// 

int diffEvenOdd(node *p){
    static int even =0 , odd = 0;
    if(p!=NULL){
        if(p->data%2==0){
            even++;
        } 
        else{
            odd++;
        }
        diffEvenOdd(p->next);
    }
    return abs(even - odd);
}

int main(){
    vector<int> v = {1,2,3,4,5};
    create(v);
    cout<<"difference between even odd="<<diffEvenOdd(first)<<endl;
}