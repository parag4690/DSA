// circular function  jha se start hua vhi khatam or ek fun dusre func ko use kre tb use hoga ye 

#include <iostream> 
using namespace std;
void funB(int n); // first we shold define
void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }

}
void funB(int n){
    if(n>1){
        cout<<n<<" ";
        funA(n/2);
    }
}
int main(){
    funA(20);
    cout<<endl;
    return 0;
}