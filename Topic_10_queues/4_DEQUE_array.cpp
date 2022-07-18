// we can insert and delete by both ends rear end and front end

#include <bits/stdc++.h>
using namespace std;
class  Queue {
    public:
    int size;
    int front;
    int rear;
    int *Q;    
};
// insert from rear
void enqueue( Queue*st , int x){
  if(st->rear == st->size-1){
      cout<<"Queue is overflow"<<endl;
  }
  else{
      st->Q[st->rear+1]=x;
      st->rear++;
  }
}
// delete from rear end;

int rearDel(Queue *st){
    int x = -1;
    if(st->rear == st->front){
        cout<<"Queue is empty"<<endl;
    }
    else{
        x = st->Q[st->rear];
        st->rear--;
    }
    return x;
    
}

// delete form front
int dequeue( Queue *st){
    int x = -1; 
    if(st->rear == st->front){
        cout<<"Queue is empty"<<endl;
    }
    else{
        st->front++;
        x = st->Q[st->front];
    }
    return x;
}

// insert from front  // ye phle delete krega fir chlega

void frontInsrt(Queue *st, int x){
    if(st->front == -2 || st->rear==st->size-1){
        cout<<"Que is full"<<endl;
    }
    else{
        st->Q[st->front]=x;
        st->front--;
    }
}
void display(Queue st){
    for(int i=st.front+1; i<=st.rear; i++){
        cout<<st.Q[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Queue st;
    cin>>st.size;
    st.front=st.rear=-1;
    st.Q=new int[st.size];
    
    enqueue(&st , 4);
    enqueue(&st , 5);
    enqueue(&st , 10);
    enqueue(&st , 20);


    display(st);
//  delete from rear
    rearDel(&st);

    display(st);

//  delete from front

    dequeue(&st);

    display(st);
//  insert from front
    
    frontInsrt(&st , 30);
    frontInsrt(&st , 40);
    frontInsrt(&st , 50);
    display(st);

 

    
}