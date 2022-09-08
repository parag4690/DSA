#include<bits/stdc++.h>
using namespace std;


vector<int> deleteElement(int arr[],int n,int k)
{
    // complete the function    
    vector<int> v;
    stack<int> s;
    int j=1 , i=1;
    s.push(arr[0]);
    while(i<n){
        if(s.empty()){
            s.push(arr[i]);
            i++;
        }
        else{
        if(arr[i]<=s.top() or s.empty()){
          s.push(arr[i]);
          i++;
        }
        else {
            if(j<=k ){
                s.pop();
                j++;
            }
            else{
              s.push(arr[i]);
              i++;
            }
        }
    }
    }
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    reverse(v.begin() , v.end());
    return v;
    
}

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        vector<int> v;
        v = deleteElement(arr,n,k);
        vector<int>::iterator it;
         for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
        cout<<endl;
        
    }
return 0;
}