#include <bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int size;
    int front;
    int rear;
    int *Q;
};

void enqueue(Queue *q , int val){
  if((q->rear+1)%q->size == q->front){
      cout<<"Queue is full"<<endl;
  }
  else{
      
      q->rear = (q->rear+1)%q->size;
      cout<<"rear"<<q->rear<<endl;
      q->Q[q->rear]= val; // dyan 0 index esliye nhi liya
      
  }
}

int dequeue(Queue *q){
  int x = -1;
  if(q->front == q->rear){
      cout<<"Queue is empty"<<endl;
  }
  else{
      q->front = (q->front+1)%q->size;
      x=q->Q[q->front];
  }
  return x;
}
void display(Queue q){
   int i=(q.front+1)%q.size;
   
  while(i!=(q.rear+1)%q.size){

      cout<<q.Q[i]<<" ";
       i=(i+1)%q.size;
       
      
   };
   cout<<endl;
}
int main(){
    Queue q;
    cin>>q.size;
    q.front=0;
    q.rear=0;
    q.Q = new int[q.size];
    
    enqueue(&q , 5);
    enqueue(&q , 10);

    enqueue(&q , 15);
    enqueue(&q , 20);
    enqueue(&q,40);
    display(q);

    cout<<dequeue(&q)<<endl;
    enqueue(&q,60);
    display(q);

}