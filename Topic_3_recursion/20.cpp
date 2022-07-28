#include <iostream>
#include <string.h>
using namespace std;

int getCodes(string input, string output[10000]) {
    static int k=1;
    if(input.length() == 0){
        int y = input[0] - '0';
        char p =  (char)('a'+y+1);
                cout<<"output"<<p<<endl;

        output[0] = p;
        return 1;
    }
     

    string inputs = input.substr(k);
    int smallStringSize = getCodes(inputs , output);

    for(int i =0; i<smallStringSize; i++ ){
        int y = input[0] - '0';
        char p = (char)('a' + y -1);
        output[i+smallStringSize] = p +output[i];
    }

    return smallStringSize+1;
    
}



int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
