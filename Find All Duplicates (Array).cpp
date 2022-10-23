#include<iostream>
#include<vector>

using namespace std;

void sort(int arr[] , int size){
	for(int i = 1; i<size; i++){
		
		int swapped = 0;
		
		for(int j = 0 ; j<size-i; j++){
			if(arr[j] > arr[j + 1]){
				swap(arr[j] , arr[j + 1]);
				swapped++;
			}
		}
		if(swapped == 0){
			break;
		}
	}
}


int main(){
	
	
	int arr[] = {1};
	int size = sizeof(arr) / sizeof(int);
	
	vector <int> v;
	
	sort(arr, size);
	
	for(int i = 0; i < size; i++){
		int count = 1;
		for(int j = i + 1; j < size; j++){
			if(arr[i] == arr[j]){
				count++;
				if(count == 2){
					v.push_back(arr[i]);
				}
			} else {
				break;
			}
		}
	}
	
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}
	
	
	
	return 0;
}
