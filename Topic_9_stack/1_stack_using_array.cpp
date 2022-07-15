#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int size; //
    int top;  //
    int *s;   // array
};
void create(Stack *st)
{ // we are modifing that why we use pointer
    cout << "enter size ";
    cin >> st->size;
    st->top = -1;
    st->s = new int[st->size];
}
void display(Stack st)
{
    int i;
    for (i = st.top; i >= 0; i--)
    { // -> ye hm tb use krte h jb pointer ka use ho rha hota hai
        cout << st.s[i] << " ";
    }
    cout << endl;
}

void push(Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "stack overFlow" << endl;
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(Stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        cout << "underflow" << endl;
    }
    else
    {
        x = st->s[st->top--]; // m sath ki sath top ko km kr rha ju
    }
    return x;
}

int peek(Stack st, int index) // index = 2 , 1;
{
    int x = -1;
    if (st.top - index + 1 < 0)  // 
    {
        cout << "invalid index" << endl;
    }
    else
    {
        x = st.s[st.top - index + 1]; //  3 - 2 + 1 = 2 , 3-1 + 1 = 3
    }
    return x;
}
//
int isEmpty(Stack st)
{
    if (st.top == -1)
    {
        return -1;
    }
    return 0;
}
int isFull(Stack st)
{
    return st.top == st.size - 1;
}

int stacktop(Stack st)
{
    if (!isEmpty(st))
        return st.s[st.top];
    return -1;
}
int main()
{
    Stack st;
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    display(st);

    cout << pop(&st) << endl;
    push(&st, 50);
    display(st);

    cout << peek(st, 1) << endl; // index
}