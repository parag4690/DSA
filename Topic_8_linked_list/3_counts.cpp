#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
} * first;
void create(vector<int> v)
{
  node *t , *last;
  first = new node ;
  first->data = v[0];
  first->next = NULL;
  last = first;
  for(int i=1; i<v.size(); i++){
      t = new node ;
      t-> data = v[i];
      t-> next = NULL;
      last -> next = t; // storing address of t
      last = t; // storing data of t
  }
}

// count 

int count(node *p){
    static int i=0;
    if(p!=NULL){
        i++;
        count(p->next);
    }
    return i;

}
int main()
{
    int n, a;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    create(v);
    cout<<count(first)<<endl;
}