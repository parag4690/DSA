#include <iostream>
using namespace std;
int main(){
    char X[]={'P' , 'a' , 'R' , 'A' , 'g' , '5', '\0'};
    for(int i=0; X[i]!='\0'; i++){
        if(X[i]>='A' && X[i]<='Z'){ // or (x[i]>=65 && a[i]<=90)
            X[i]=X[i]+32;
        }
        else if(X[i]>=97 && X[i]<=122){
            X[i]-=32;
        }
    }
    cout<<X<<endl;
}