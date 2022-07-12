#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *next;
}*first;
void create(vector<int> v){
    node *t , *last;
    first = new node;
    first->data = v[0];
    first->next = NULL;
    last = first;
    for(int i=1; i<v.size(); i++){
        t = new node;
        t->data = v[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int max(node *p){
    static int maximum ;
    
    if(p==NULL){

        return INT_MIN;
    }
    else{
        int m = max(p->next) ; // recursion
        if(p->data>m){
           maximum = p->data;
        }
        else{
            maximum = m;
        }
    }
    return maximum;
}

int main(){
  vector<int> v = {9,2,6,4,7};
  create(v);
  cout<<max(first)<<endl;
}