#include<iostream>
using namespace std;
int main(){
	
	int sum = 5;
	int array[5] = {1,2,3,4,5};
	for(int i = 0; i < 5 ; i++){
		for(int j = i + 1; j<5 ; j++){
			if(array[i] + array[j] == sum){
				cout<<array[i]<<" , "<<array[j]<<endl;
			}
		}
	}
	
	return 0;
}
