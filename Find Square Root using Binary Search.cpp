#include<iostream>
using namespace std;

int sqByBinarySearch(int n){
	int s = 0;
	int e = n;
	int mid = s + (e - s) / 2;
	
	while(s<=e){
		int square = mid * mid;
		if(square == n){
			return mid;
		} else if(square > n){
			e = mid - 1;
		} else {
			s = mid + 1;
		}
		mid = s + (e - s) / 2;
		
	}
}

int main(){
	
	int num = 25;
	int squareRoot = sqByBinarySearch(num);
	cout<<"Square Root = "<< squareRoot <<endl;
	
	
	return 0;
}
