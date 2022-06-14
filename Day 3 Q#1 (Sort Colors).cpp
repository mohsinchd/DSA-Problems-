#include<iostream>
using namespace std;

void sortColors(int arr[] , int size){
	
	for(int i = 0; i < size - 1 ; i++){
		for(int j = i + 1; j < size ; j++){
			if(arr[i] > arr[j]){
				swap(arr[i] , arr[j]);
			}
		}
	}
	
	for(int i = 0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
	
	
}

int main(){
	
	int arr[6] = {2,0,2,1,1,0};
	sortColors(arr , 6);
	
	
	
	return 0;
}
