#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// global first pointer

struct node{
  int data;
  struct node *next;
}*first=NULL;

void create(int *a , int n){
   int i;
   struct node *t , *last;
   first=new node;
   first->data=a[0];
   first->next=NULL; // kyuki mene abhi to ek ka hi store kraya tha
   last=first; // just copy


   for(i=1; i<n; i++){
     t=new node;
     t->data=a[i];
     t->next=NULL;
     last->next=t;
     last=t;
   }
}

void display(struct node *p){
  while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;
}

// ***********************************              Recursion                 **********************/

void displayRec(struct node *p){
  if(p!=NULL){
    cout<<p->data<<" ";
    displayRec(p->next);
  } // esme m endl ni krskta
}


// *********************************                Recursion back   ***********************/
void displayrev(struct node *p){
  if(p!=NULL){
    displayrev(p->next);
    cout<<p->data<<" ";
  }
}

// **********************************    counting  by me         ***********************************//

int countRec(struct node *p){
  static int count=0;
  if(p!=NULL){
    count++;
    countRec(p->next);
  }
  return count;
}

// ******************************      counting by sir        *******************************//

int count(struct node *p){
  if(p==0){
    return 0;
  }
  else{
    return count(p->next)+1;
  }
}

// ******************************     sum of elements  by me   **************************//

int sumRec(struct node *p){
  if(p==0){
    return 0;
  }
  else{
    return sumRec(p->next)+p->data;
  }
}

// *************************         sum by sir         *******************   // 

int sum(struct node *p){
  static int add=0;
  if(p!=NULL){
    add+=p->data;
    sum(p->next);
  }
  return add;
}

// ***********************          maximum             ***************// 

int max(struct node *p){
  int max=p->data;  // or int_min
  while(p!=NULL){
  
    if(max<(p->data)){
      max=p->data;
    } 
    p=p->next;
  }
  return max;
}

// *******************  maximum recursion     **********//

int maximum(struct node *p){
  static int maxi=0;
  if(p==0){
    maxi=0;
    return maxi;
  }
  else{
    
     maximum(p->next);
     if(p->data>maxi){
      maxi=p->data;
    }
    return maxi;
  }
}


// ***************************       searching   **********************//

void linear(struct node *p , int key){
  bool check=1;
  while(p!=NULL){
    if(key==p->data){
      cout<<"YES"<<endl;
      check=0;
      break;
    }
    p=p->next;
  }
  if(check){
    cout<<"NO"<<endl;
  }
}
// recurseion  return (p->next,key)
// *********************  binary   *****************//

void binery(struct node *p , int key){
  
}

int main(){
  // create for an array
  int A[]={33,5,7,16,15};
  
  create(A,5);

  display(first);
  displayRec(first);
  cout<<endl;
  displayrev(first);
  cout<<endl;

  //

  cout<<"counting of list by me "<<countRec(first)<<endl;

  cout<<"counting of lins by sir "<<count(first)<<endl;


  //


  cout<<"sum of list by me "<<sumRec(first)<<endl;

  cout<<"sum of list by sir "<<sum(first)<<endl;

  //


  cout<<"maximum of list by me "<<max(first)<<endl;

  cout<<"maximum of list by rec "<<maximum(first)<<endl;

  // 

  linear(first , 47);


}