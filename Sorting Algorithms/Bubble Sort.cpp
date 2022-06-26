#include<iostream>
using namespace std;
// Bubble Sort:-
// Compare neighbour elements in array and swap if a > b in each round.

void bubbleSort(int arr[] , int n){
	
	for(int i = 1; i<n; i++){
		
		int swapped = 0;
		
		for(int j = 0 ; j<n-i; j++){
			if(arr[j] > arr[j + 1]){
				swap(arr[j] , arr[j + 1]);
				swapped++;
			}
		}
		if(swapped == 0){
			break;
		}
	}
	
	for(int i = 0; i<n ; i++){
		cout<<arr[i]<<" ";
	}
	
	
}

int main(){
	
	
	int arr[6] = {10 , 1 , 7 , 6 , 14 , 9};
	bubbleSort(arr , 6);
	
	
	return 0;
}
