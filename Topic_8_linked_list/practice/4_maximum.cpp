#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first = NULL;

void create(vector<int> v){
    node *t , *last;
    first = new node;
    first->data=v[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<v.size(); i++){
        t = new node;
        t->data = v[i];
        t->next = NULL;
        last -> next = t;
        last = t;
    }
}

int maximum(node *p){
    static int max=INT_MIN;
    if(p!=NULL){
        if(p->data>max){
            max = p->data;
        }
        maximum(p->next);
    }
    return max;
}

int linearSearch( node *p , int x){
  if(p!=0){
      if(p->data == x){
          return 1;
      }
      linearSearch(p->next ,x);
  }
  return 0;

}



int main(){
    vector<int> v={1,2,3,4};
    create(v);
    cout<<"maximum="<<maximum(first)<<endl;
    int x;
    cin>>x;
    cout<<linearSearch(first ,x)<<endl;
}