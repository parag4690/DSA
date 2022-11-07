#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n , c=0 , c1=0 ,  sum=0 , min=INT_MAX, ans;
	    cin>>n;
	    string s , s1;
	    cin>>s>>s1;
	    sort(s.begin() , s.end());
	    sort(s1.begin() , s1.end());
	    
	    if(n==1) {
	        if(s==s1) cout<<1<<endl; else cout<<0<<endl;
	    }
	    else{
	        map<char , int> m , m1;
	        for(int i=0; i<n; i++){
	            m[s[i]]++; 
	        }
            for(int i=0; i<n; i++){
                m1[s1[i]]++;
            }
            

	        for(auto i : m){
	            for(auto x : m1){
	                if(i.first == x.first){
	                    if(x.second<min)
	                     min=x.second;
	                }
	            }
                
	        }
	        cout<<min<<endl;
	        
	    }
	        
	 }
	
	return 0;
}
