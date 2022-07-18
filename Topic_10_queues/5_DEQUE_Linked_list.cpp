#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *prev;
    int data;
    node *next;
} *rear = NULL, *front = NULL;

// insert from rear end;
void enqueue(int x)
{
    node *t = new node;
    if (t == NULL)
    {
        cout << "Que is full" << endl;
    }
    else
    {
        t->prev = NULL;
        t->data = x;
        t->next = NULL;
        // for first node
        if (front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            t->prev = rear;
            rear = t;
        }
    }
}

// delete form rear end;

int dequeue()
{

    int x = -1;
    if (front == rear)
    {
        cout << "empty" << endl;
    }
    else
    {
        node *p = rear;
        rear = rear->prev;
        rear->next = NULL; // important
        delete (p);
    }
    return -1;
}

// delete from front

int frntDel(node *p)
{

    int x = -1;
    if (p == NULL)
    {
        cout << "Que is empty" << endl;
    }
    else
    {
        x = p->data;
        front = front->next;
        delete p;
    }
    return x;
}

void display()
{
    node *p = front;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

// insert form front

void insrtFrnt(node *p, int x)
{
    node *t = new node;
    if (t == NULL)
    { // dyan
        cout << "Que is full" << endl;
    }
    else
    {
        t->data = x;
        t->next = front;
        t->prev = NULL;
        front = t; // dyan
    }
}

int main()
{

    // insert from rear
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    // delete form rear
    dequeue();
    display();

    // delete from front
    frntDel(front);
    display();

    // insert from front

    insrtFrnt(front, 40);
    display();
}