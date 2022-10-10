#include<iostream>
using namespace std;
int main(){
	
	int arr[5] = {2,3,2,3,1};
	int answer = 0;
	for(int i = 0; i < 5; i++){
		answer = answer ^ arr[i];
	}
	
	cout<<answer<<endl;
	
	
	
	return 0;
}
