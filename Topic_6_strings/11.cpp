
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int N){
        // code here
        static long long sum=0;
       long long p=1;
        static long long i=0 , j=1;
        if(N==0){
          return sum;
        }
        int m=j;
        while(m--){
          i++;
          p=p*i;
        }
        sum+=p;
        j++;
        N=N-1;
       return sequence(N);
        
        
       
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends