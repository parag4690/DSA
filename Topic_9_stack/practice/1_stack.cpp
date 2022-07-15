#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    int *s; // point to array;
};
void create(Stack *st){
   cout<<"enter  size =";
   cin>>st->size;
   st->top = -1; // let 
   st->s = new int[st->size];
}

void display(Stack st){
    for(int i=st.top; i>=0; i--){
        cout<<st.s[i]<<" ";
    }
}

void push(Stack *st , int x){
    if(st->top==st->size-1){
        cout<<"Stack overflow"<<endl;
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}

//

int pop(Stack *st){
    int x = -1;
    if(st->top == -1){
        cout<<"Stack underflow"<<endl;
    }
    else{
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

//

int peek(Stack st , int index){
    int x = -1;
    if(st.top-index+1 <  0){
        cout<<"invalid index "<<endl;
    }
    else{
        x = st.s[st.top-index+1];
    }
    return x;
}

int main(){
    Stack st;
    
    create(&st);
    push(&st , 10);
    display(st);
}