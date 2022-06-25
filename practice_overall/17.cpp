#include <iostream>
using namespace std;
int main(){
    
    int a[];
    for(int i=0; i<a.size(); i++){
        cin>>a[i];
    }
    int sum=0 , max=0;
    for(int i=0; i<a.size; i++){
        sum=sum+a[i];
        if(sum>max){
            max=sum;
        }
        else{
            sum=0;
            cout<<"sum of this is equal to ";
            cout<<max;
        }
    }
    cout<<max<<endl;
}