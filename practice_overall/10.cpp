#include <iostream>
using namespace std;
// using hashing
// code chef pangram 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=26;
        int cost[n];
        for(int i=0; i<n; i++){
            cin>>cost[i];
        }
        string s;
        cin>>s;
        int H[26]={0};
        for(int i=0; s[i]!='\0'; i++){
            H[s[i]-97]++;
        }
        int sum=0;
        for(int i=0; i<26; i++){
            if(H[i]==0){
                sum=sum+cost[i];
            }
        }

        cout<<sum<<endl;

    }
}