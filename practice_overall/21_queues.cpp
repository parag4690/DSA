#include <bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int size;
    int front;
    int rear;
    int *q;
};

void enqueue(Queue *que , int x){
    if(que->rear == que->size-1){
        cout<<"Que is full"<<endl;
    }
    else{
        que->rear++;
        que->q[que->rear]=x;
    }
}

int dequeue(Queue *que){
    int x = -1;
    if(que->rear == que->front){
        cout<<"queue is empty"<<endl;
    }
    else{
        que->front++;
        x = que->q[que->front];
    }
    return x;
}

int isEmpty(Queue que){
    if(que.rear == que.front){
        return true;
    }
    return false;
}

int Full(Queue que){
    if(que.rear == que.size-1){
        return true;
    }
    return false;
}

void display(Queue que){
    while(que.front!=que.rear){
        que.front++;
        cout<<que.q[que.front]<<" ";
    }
    cout<<endl;
}

int main(){
    Queue que;
    cin>>que.size;
    que.q=new int[que.size];
    que.front=que.rear=-1;

    enqueue(&que , 1);
    enqueue(&que , 2);
    enqueue(&que , 3);
    enqueue(&que , 4);
    display(que);
    cout<<Full(que)<<endl;
    cout<<dequeue(&que)<<endl;
    // cout<<Full(que)<<endl;  circular que
    display(que);

}