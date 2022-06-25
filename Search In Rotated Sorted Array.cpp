#include<iostream>
using namespace std;

int binarySearch(int arr[] , int s , int e , int key ){
	int start = s;
	int end = e;
	int mid = start + (end - start)/2;
	while(start<=end){
		if(key == arr[mid]){
			return mid;
		}
		if(key >  arr[mid]){
			start = mid + 1;
		}else{
			end = mid - 1;
		}
		mid = start + (end - start)/2;
	}
	return -1;
}


int getPivot(int arr[] , int n){
	
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s) / 2;
	
	while(s<e){
		if(arr[mid] >= arr[0]){
			s = mid + 1;
		}else{
			e = mid;
		}
		mid = s + (e - s) / 2;
	}
	
	return e;
	
}


int main(){
	
	int arr[5] = {7 , 9 , 1 , 2 , 3};
	int key = 2;
	int pivot = getPivot(arr , 5);
	if(key >= arr[pivot] && key <= arr[4]){
		int result = binarySearch(arr , pivot , 4 , key);
		cout<<result;
	} else{
		int result = binarySearch(arr , 0 , pivot - 1, key);
		cout<<result;
	}
	
	return 0;
}
