#include<iostream>
using namespace std;

int kthSmallest(int arr[] , int size , int k){
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
	return arr[k - 1];
	

}


int main(){
	int k = 4;
	int arr[6] = {7 , 10 , 4 , 3 , 20 , 15};
	int kthSmallestElement = kthSmallest(arr , 6 , k);
	cout<<"Kth Smallest element in array is :: "<<kthSmallestElement;
	return 0;
}
