#include <bits/stdc++.h>
using namespace std;

void powerSet(string s , string s1 , vector<string> &v , int index){
    if(s.size()==index) {
        v.push_back(s1);
        return;
    }
    // take
    powerSet(s , s1+s[index], v ,  index+1 );

    // not take
    powerSet(s , s1 , v , index+1);

}


int main(){

    string s, s1="";
    cin>>s;
    
    vector<string> v;

    powerSet(s , s1 , v , 0 );
    sort(v.begin() , v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    } cout<<endl;
    
    return 0;
}