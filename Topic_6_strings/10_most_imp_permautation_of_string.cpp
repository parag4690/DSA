#include <iostream>
using namespace std;
void perm(string s , int k){
    static int A[10];
    static char res[10];
    if(s[k]=='\0'){
        res[k]='\0';
        cout<<res<<" ";
    }
    else{
        for(int i=0; s[i]!='\0'; i++){
            if(A[i]==0){
                res[k]=s[i];
                A[i]=1;
                perm(s , k+1);
                // return 
                A[i]=0;
            }
        }
    }

}
int main(){
    string s;
    cin>>s;
    perm(s , 0);
    cout<<endl;
}