#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*head = NULL;

void create(vector<int> v){
    int n = v.size();
    head= new node;
    
}

int main(){
    vector<int> v = {1,2,3,4};
    create(v);

}