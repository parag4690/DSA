// #include<iostream>
// using namespace std;

// int getValue(int x , int y = 0, int z=0){  
//     return (x + y + z);  // default parameters must be added in last
// }

// int main(){
//    cout << getValue(10);
//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     const int A;

//     A = 10;

//     cout << A << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     const int p = 5;
//     int const *q = &p;
//     ++;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int p = 5;
//     int const * const q = &p;
//     p++;
// }

#include <iostream>
using namespace std;

int main(){
    int p = 5;
    int * const q = &p;
    (*q)++;
}

