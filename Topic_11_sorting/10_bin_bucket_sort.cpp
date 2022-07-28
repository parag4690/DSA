#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data; 
    node *next;
};


void insert(node  **pos , int value){
    node *t = new node;
    t->data = value;
    t->next = nullptr;

    if (pos[value] == nullptr){ // ptrBins[idx] is head ptr
        pos[value] = t;
    } else {
        node* p = pos[value];
        while (p->next != nullptr){
            p = p->next;
        }
        p->next = t;
    }
    
}


int Delete(node** ptrBins, int idx){
    node* p = ptrBins[idx];  // ptrBins[idx] is head ptr
    ptrBins[idx] = ptrBins[idx]->next;
    int x = p->data;
    delete p;
    return x;
}

void binsort(int a[] , int n){
    int i , j;
    node **bins;

    
    int max= INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>=max){
            max = a[i];
        }
    }

bins = new node *[max + 1];
    for(int i=0; i<n; i++){
        insert(bins , a[i]);
    }    

    i=0 , j= 0;
    while (i < max+1){
        while (bins[i] != nullptr){
            a[j++] = Delete(bins, i);
        }
        i++;
    }

    // delete heap memery

    delete [] bins;
}



int main(){
   int n = 5;
   int a[n]={5,4,2,3,4};

   binsort( a , n);

   for(int i=0; i<n; i++){
       cout<<a[i]<<" ";
   }
   cout<<endl;

}