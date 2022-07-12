#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v){ // refrese lena hai
  for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        // new 
        cout<<v.at(i)<<" ";
  }
  cout<<endl;

}
int main(){
    int n;
    cin>>n;
    int ele;
   vector<int> v; // i can make float bi bna skte hai
   for(int i=0; i<n; i++){
       cin>>ele;
       v.push_back(ele);
   }
   v.pop_back(); // delete last element 
   
   display(v);

   vector<int>::iterator parag=v.begin();
   v.insert(parag+3,5,544); //  iteratior se hi hoga jgah , repeat(optional)  , number

   display(v);

   // erase
   
}