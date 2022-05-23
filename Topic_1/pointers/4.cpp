#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    int *p1;
    char *p2;  // it should take 1
    float *p3;  // it should take 4 but it doesn't happen
    double *p4;
    struct Rectangle *p5;
    
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
   
    // every pointer has same amount of memory 

    

    return 0;


}