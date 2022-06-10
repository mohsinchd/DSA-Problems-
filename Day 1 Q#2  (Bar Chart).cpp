#include<iostream>
using namespace std;

void barChart(int arr[] , int size){
	
	int highestNumber = arr[0];
	for(int i = 0; i<size; i++){
		if(highestNumber < arr[i + 1]){
			highestNumber = arr[i + 1];
		}
	}
	
	for(int i = highestNumber ; i>=1 ; i--){
		for(int j = 0; j<size ; j++){
			if(arr[j] >= i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
}

int main(){
	
	int arr[5] = {3 , 1 , 0 , 7 , 5};
	barChart(arr , 5);
	
	return 0;
}
