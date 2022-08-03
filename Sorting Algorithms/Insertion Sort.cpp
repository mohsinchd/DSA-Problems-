#include<iostream>
using namespace std;
int main(){
	
	int arr[5] = {5,3,6,2,8};
	
	for(int i = 1; i < 5; i++){
		int temp = arr[i];
		int j = i - 1;
		for( ; j>=0; j--){
			if(arr[j] > temp){
				arr[j + 1] = arr[j];
			} else {
				break;
			}
		}
		arr[j + 1] = temp;
	}
	
//	Displaying Array
	for(int i = 0; i<5; i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
