#include<iostream>
using namespace std;

int kthLargest(int arr[] , int size , int k){
	// Sorting the array using bubble sort algorithm
  for (int step = 0; step < (size-1); ++step) {
    int swapped = 0;
    for (int i = 0; i < (size-step-1); ++i) {
      if (arr[i] > arr[i + 1]) {
		swap(arr[i] , arr[i + 1]);
        swapped = 1;
      }
    }
    if (swapped == 0)
      break;
}
	return arr[size - k];
	
}


int main(){
	int k = 2;
	int arr[6] = {3,2,1,5,6,4};
	int kthLargestElement = kthLargest(arr , 6 , k);
	cout<<"Kth Largest element in array is :: "<<kthLargestElement;
	return 0;
}
