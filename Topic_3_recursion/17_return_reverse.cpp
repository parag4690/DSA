#include <bits/stdc++.h>
using namespace std;

/*m *********************** by me ******************    */

int reverse(string s ,string output[]){
    if(s.empty()){
      output[0] = s[0];
      return 1;
    }

    else{
        string substring = s.substr(1);
        int smallStringSize = reverse(substring , output);
            int i = 0;
            output[i+smallStringSize] = s[i]; 
     

        return smallStringSize+1; // hr bar size ek bdta ja rha h
    }
}

/************************             2nd  method    ***************/



int main(){
    string s;
    cin>>s;
    string *output = new string[1000];
    int count = reverse(s , output);

    for(int i = 0 ; i<count ; i++){
        cout<<output[i];
    }
    cout<<endl;
}