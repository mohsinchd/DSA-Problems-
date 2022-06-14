#include<iostream>
using namespace std;
int main(){
	
	int arr[7] = {1,2,3,4,5,6,7};
	int size = sizeof(arr) / sizeof(int);
	int k = 3;
	int temp[size];
//	Rotating array in temp
	for(int i = 0 ; i<size ; i++){
		temp[(i+k)%size] = arr[i];
	}
//	copying temp in original array
	for(int i = 0; i<size ; i++){
		arr[i] = temp[i];
	}
//	Output
	for(int i = 0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
