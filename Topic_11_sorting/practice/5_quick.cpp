#include <bits/stdc++.h>
using namespace std;
class quickSort{
    public:
    vector<int> a;
    
    int partition(vector<int> &a , int l , int h){
         int pivot = a[l];
         int i = l , j = h;
         do{

             do{
                 i++ ;// finding greater 
             }while(a[i]<=pivot);

             do{
                 j--;
             }while(a[j]>pivot);

             if(i<j){
                 swap(a[i] , a[j]);
             }

         }while(i<j);

         swap(a[l] , a[j]);

         return j;
    }

    void quicksort(vector<int> &v , int l , int h){
        int j;
           if(l<h){
             j=partition(v , l , h );
             quicksort(v , l , j);
             quicksort(v , j+1 , h);

           }
    }

    

};
int main(){
  vector<int> a = {3,4,3,2,7,6};
  quickSort s;

  s.quicksort(a , 0 , a.size());

  for(int i=0; i<a.size(); i++){
      cout<<a[i]<<" ";
  }
  cout<<endl;

}