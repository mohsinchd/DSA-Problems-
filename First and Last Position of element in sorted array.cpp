#include<iostream>
using namespace std;

// Find first and last position of element in sorted array


int lastOcc(int arr[] , int key , int n){
	int start = 0;
	int end = n - 1;
	int mid = start + (end - start) / 2;
	int answer = -1;
	while(start<=end){
		
		if(arr[mid] == key){
			answer = mid;
			start = mid + 1;	
		}else if(key > arr[mid]){
			start = mid + 1;
		}else{
			end = mid - 1;	
		}
		mid = start + (end - start) / 2;
	}
	
	return answer;
}


int firstOcc(int arr[] , int key , int n){
	int start = 0;
	int end = n - 1;
	int mid = start + (end - start) / 2;
	int answer = -1;
	while(start<=end){
		
		if(arr[mid] == key){
			answer = mid;
			end = mid - 1;	
		}else if(key > arr[mid]){
			start = mid + 1;
		}else{
			end = mid - 1;	
		}
		mid = start + (end - start) / 2;
	}
	
	return answer;
}

int main(){
	
	int arr[5] = {1 , 2 , 3 , 3 , 5};
	int key = 3;
	
	int firstOcc_s = firstOcc(arr , key , 5);
	int lastOcc_s = lastOcc(arr , key , 5);
	
	cout<<"First position::"<<firstOcc_s<<" Last Position::"<<lastOcc_s<<endl;
	
	
	
	return 0;
}
