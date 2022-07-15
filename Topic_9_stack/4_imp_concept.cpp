#include <iostream>
using namespace std;
int main()
{
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[1];
  float *ptr2 = ptr1 + 4; // jo bhi side me likha hoga vo ayga
  
  cout<< *ptr2 - *ptr1;
  cout<< ptr2-ptr1; //  important
  return 0;
}