#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *p;
}*first;
void create(vector<int> v){
    int i;
    node *t , *last;
    first = new node;
    first->data = v[0];
    first->p = NULL;
    last = first;

    //
    for(int i=1; i<v.size(); i++){
        t = new node;
        t->data = v[i];
        t->p=NULL;
        last->p = t;
        last = t;
    }
}
//  recursion 
int sum(node *link){
    if(link==NULL){
       return 0;
    }
    else{
        return sum(link->p) + link->data; 
    }
}

// 
int main(){
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n; i++){
        cin>>a;
        v.push_back(a);
    }
    create(v);

    cout<<sum(first)<<endl;
}