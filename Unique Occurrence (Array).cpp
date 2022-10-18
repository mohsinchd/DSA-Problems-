#include <iostream>
#include <vector>
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

int main() {

 	int arr[] = {-3,0,1,-3,1,1,1,-3,10,0};
	int size = sizeof(arr) / sizeof(int);
	sort(arr, size);
	vector <int> store;
	
	int i = 0;
	
	while(i < size){
		int count = 1;
		for(int j = i + 1; j < size; j++){
			if(arr[i] == arr[j]){
				count = count + 1;
			} else {
				break;
			}
		}
		store.push_back(count);
		i = i + count;
	}
	
	int j = 1;
	for(int i = 0; i < store.size(); i++){
		if(store[i] == store[j]){
			cout<<"False"<<endl;
			break;
		}
		j++;
	}
	
	cout<<"True"<<endl;
	
	
    return 0;
}
