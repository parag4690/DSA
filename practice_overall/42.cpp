#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *left;
    int data;
    int height;
    Node*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
Node *root = NULL;
