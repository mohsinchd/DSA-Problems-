#include<iostream>
using namespace std;

void swapAlternate(int arr[] , int size){
	
	int first = 0;
	int second = 1;
	int i = 0;
	while(i < size){
		if(first == size - 1) {
			second = size - 1;
			cout<<"value of second Is::"<<second<<endl;
		}
		swap(arr[first] , arr[second]);
		first += 2;
		second += 2;
		i++;
	}
	
//	Print the array
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
	
	
}

int main(){
	
	int even[8] = {5,2,9,4,7,6,1,0};
	int odd[5] = {11,33,9,76,43};
	
//	swapAlternate(even , 8);
	cout<<endl;
	swapAlternate(odd, 5);
	
	return 0;
}
