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


//
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

    dequeue(&st);
    

    enqueue(&st , 30); //  drow back we are not able to use free space 

    display(st);
}