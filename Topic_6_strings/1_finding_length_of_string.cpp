#include <iostream>
using namespace std;
int main(){
    char name[]={'w' , 'e' , 'l' , 'c' , 'o' , 'm' , 'e' , '\0'};
    int i=0; 
    while(name[i]!='\0'){
        i++;
    }
    cout<<i<<endl;

    string name2; // we cant take char
    cin>>name2;
    int j=0; 
    while(name2[j]!='\0'){
        j++;
    }
    cout<<j<<endl;
}