#include <iostream>
using namespace std;
int main(){
    char a[]={"parag "};
    char b[]={"parag "};
    int i,j;
    for(i=0,j=0; a[i]!='\0'&& b[i]!='\0'; i++ , j++){
        if(a[i]!=b[j]){
            break;
        }
        
    }
    cout<<i<<' '<<j<<endl;
    if(a[i]==b[j]){
        cout<<"equal"<<endl;
    }
    else if(a[i]>b[j]){
        cout<<"greater"<<endl;
    }
    else{
        cout<<"smaller"<<endl;
    }
}