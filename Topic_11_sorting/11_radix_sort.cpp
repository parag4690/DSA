#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};

int countDigits(int n){
    int c = 0;
    while(n>0){
        c++;
        n=n/10;
    }
    return c;
}

int findMax(int *a , int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>=max){
            max = a[i];
        }
    }
    return max;
}

void insert(node **bincell , int value , int index){
    node *t = new node;
    t->data = value;
    t->next = NULL;

    if(bincell[index] == NULL){
        bincell[index] = t;
    }
    else{
        node *head = bincell[index];
        while(head -> next){
            head = head->next;
        }
        head->next = t;
    }

}

int del(node **bincell , int index){
    node *head = bincell[index];
    bincell[index]=bincell[index]->next;
    int x = head ->data;
    free(head);
    return x;
}

void Radix(int *a , int n){
    int d = countDigits(findMax(a,n));

    int i , j , div = 1;

    node *bins[10];

    for(i = 0; i<10; i++){
        bins[i] = NULL;
    }


    for(int p = 1; p<=d; p++){
        for(i=0; i<n; i++){
            insert(bins , a[i] , (a[i]/div)%10); // dyan . insert last digit , second , thrid -------
        }
        i = j = 0;
        while(i<10){
            while(bins[i] != NULL){
                a[j++] = del(bins , i);
            }
            i++;
        }
        div=div*10;
    }
}


int main(){
    int i , n;
    n = 10;
    int a[n]={4,5,3,2,3,56,28,35,67,89};

    Radix(a , n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
} 
