#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int top;
    int size;
    int *s;
    Stack(int size){
        this->size=size;
        this->top=-1;
        s=new int[size];
    }
    void insert(int x){
       if(top==size-1){
          return;
       }
       else{
           top++;
           s[top]=x;
       }
    }
    void pop(){
        if(top==-1){
            return;
        }
        top--;
    }
    int full(){
        if(top==-1) return -1;
        return s[top];
    }
    int empty(){
        if(top==-1) return 1;
        return 0;
    }
    void display(){
        for(int i=top; i>=0; i--){
              cout<<s[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
  Stack st(5);
  st.insert(1);
  st.insert(2);
  st.insert(3);
  st.insert(4);
  st.insert(5);
  st.display();
  st.insert(6);
//   st.display();
  st.pop();
  st.display();
  
}