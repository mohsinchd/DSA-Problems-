#include<iostream>
using namespace std;
// Selection-Sort:-
// Find the minimum element and place at the begining in each round.
void selectionSort(int arr[] , int n){
	for(int i = 0; i<n ; i++){
		int swapped = 0;
		int minIndex = i;
		for(int j = i + 1; j<n ; j++){
			if(arr[minIndex] > arr[j]){
				minIndex = j;
				swapped++;
			}
		}
		if(swapped){
			swap(arr[i] , arr[minIndex]);
		}else{
			break;
		}
	}
	
//	OUTPUT

	for(int i = 0; i<n ; i++){
		cout<<arr[i]<<" ";
	}
	
}

int main(){
	
	int arr[5] = {64, 25 , 12 , 22 , 11};
	selectionSort(arr, 5);
	
	
	return 0;
}
