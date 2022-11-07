#include <bits/stdc++.h>
using namespace std;

bool isp(string name , int i ,int j ){
    if(i>j)
     return true;
    if(name[i]!=name[j])
     return false;
    else 
     return  isp(name , i+1 , j-1);
    
}

int main(){
    string name;
    cin>>name;
    if(isp(name , 0 , name.length()-1)){
        cout<<"YEs"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}