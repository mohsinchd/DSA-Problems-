#include<iostream>
using namespace std;

int linearSearch(int arr[] , int size , int key){
	for(int i = 0; i < size ; i++){
		if(key == arr[i]){
			return i;
		}
	}
	return -1;
}

int main(){
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	int key = 15;
	int answer = linearSearch(arr , 10 ,  key);
	cout<<answer<<endl;
	
	
	return 0;
}
