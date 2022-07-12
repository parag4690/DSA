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

int search(node *p , int  key , int total ){
   total--;
   if(total<0){
       return -1;
   }
   if(p->data == key){
       return p->data;
   }
   else {
       return search(p->next , key , total);
   }
   
//    return 0;
}


int main(){
  vector<int> v = {9,2,6,4,7};
  create(v);
  int x;
  cin>>x;
  cout<<search(first , x , 5)<<endl;
}