#include<iostream>
using namespace std;

int firstOcc(int arr[] , int size, int key){
	
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start) / 2;
	
	int ans = -1;
	
	while(start <= end){
		if(arr[mid] == key){
			ans = mid;
			end = mid - 1;
		} else if(arr[mid] > key){
			end = mid - 1;
		} else {
			start = mid + 1;
		}
		
		mid = start + (end - start) / 2;
	}
	return ans;
	
	
}

int lastOcc(int arr[] , int size, int key){
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start) / 2;
	
	int ans = -1;
	
	while(start <= end){
		if(arr[mid] == key){
			ans = mid;
			start = mid + 1;
		} else if(arr[mid] > key){
			end = mid - 1;
		} else {
			start = mid + 1;
		}
		
		mid = start + (end - start) / 2;
	}
	return ans;
	
}

int main(){
	

	int arr[] = {0,1,2,2,2,3};
	int size = sizeof(arr) / sizeof(int);
	
	int key = 2;
	
	int first = firstOcc(arr, size, key);
	int last = lastOcc(arr, size, key);
	
	cout<<"First Occurence of Element is at Index::"<<first<<endl;
	cout<<"Last occurence of Element is at Index::"<<last<<endl;
	
	
	
	
	return 0;
}
