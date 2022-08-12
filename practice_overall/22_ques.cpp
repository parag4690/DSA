#include <bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int size;
    int front;
    int rear;
    int *s;
};

void enqueue(Queue *Q , int x){
    if(Q->rear == Q->size-1){
        cout<<"full"<<endl;
    }
    else{
        Q->rear++;
        Q->s[Q->rear]=x;
    }
}

void dequeue(Queue *Q ){
    if(Q->rear == Q->front){
      cout<<"empty"<<endl;
    }
    else{
        Q->front++;
    }
}

void display(Queue Q){
    while(Q.front!=Q.rear){
        Q.front++;
        cout<<Q.s[Q.front]<<" ";
    }
    cout<<endl;
}



int main(){
  Queue q;
  cin>>q.size;
  q.s[q.size];
  q.front = q.rear = -1;
    enqueue(&q , 1);
    enqueue(&q , 2);
    enqueue(&q , 3);
    enqueue(&q , 4);
    display(q);
    dequeue(&q);
    // cout<<Full(que)<<endl;  circular que
    display(q);

}