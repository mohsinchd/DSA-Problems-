#include<iostream>
#include<vector>

using namespace std;
int main(){
	
	
	int arr1[] = {1,4,5};
	int arr2[] = {3,4,5};
	int n = sizeof(arr1) / sizeof(int);
	int m = sizeof(arr2) / sizeof(int);
	
	vector <int> v;
	
	int i = 0;
	int j = 0;
	
	while(i < n && j < m){
		int element = arr1[i];
		
		if(element < arr2[j]){
			i++;
		} else if(element == arr2[j]){
			v.push_back(element);
			i++;
			j++;
		} else if(element > arr2[j]){
			j++;
		}
	}
	
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}
	
	
	
	return 0;
}
