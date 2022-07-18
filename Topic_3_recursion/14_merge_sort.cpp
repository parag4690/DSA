#include <iostream>
using namespace std;

void Merge(int A[], int low, int mid, int high){
    int i = low;
    int j = mid+1;
    int k = low;
    int B[high+1];
    while (i <= mid && j <= high){
        if (A[i] < A[j]){
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid){
        B[k++] = A[i++];
    }
    while (j <= high){
        B[k++] = A[j++];
    }
    for (int i=low; i<=high; i++){
        A[i] = B[i];
    }
}

void mergeSort(int input[], int size){
	// Write your code here
  int low =0;
  int h = size-1;

  if(low<h){
      int mid = low + (h-low)/2;     
      mergeSort(input , mid);
     mergeSort(input[mid+1] , h);
     Merge(input , low  , mid , h);
  }
    
}


int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
    
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}