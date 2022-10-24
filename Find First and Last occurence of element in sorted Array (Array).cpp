#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	int arr[] = {0,1,2,2,2,3};
	int size = sizeof(arr) / sizeof(int);
	
	int input = 3;
	
	vector <int> v;
	
	int leftFlag = 0;
	int rightFlag = 0;
	
	for(int i = 0; i < size; i++){
		if(arr[i] == input){
			v.push_back(i);
			leftFlag++;
			break;
		}
	}
	
	if(leftFlag == 0){
		v.push_back(-1);
	}
	
	for(int j = size - 1; j > 0; j--){
		if(arr[j] == input){
			v.push_back(j);
			rightFlag++;
			break;
		}
	}
	
	if(rightFlag == 0){
		v.push_back(-1);
	}
	
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}
	
	
	return 0;
}
