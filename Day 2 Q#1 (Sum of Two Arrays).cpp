#include<iostream>
#include<math.h>
using namespace std;

int reverseInteger(int number){
	int remainder = 0;
	int reversedNumber = 0;
	while(number != 0){
		remainder = number % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		number /= 10;
	}
	return reversedNumber;
	
}

int sumOfTwoArrays(int arr_1[] , int size_1 , int arr_2[] , int size_2){
	long integer_1 = 0;
	int integer_2 = 0;
	int digit = 0;
	
//	getting reversed concatenated integer
	
	for(int i = 0; i<size_1 ; i++){
		digit = arr_1[i];
		integer_1 = pow(10 , i) * digit + integer_1;
	}
	
	for(int i = 0; i<size_2; i++){
		digit = arr_2[i];
		integer_2 = pow(10 , i) * digit + integer_2;
	}
	
//	reversing again
	int answer_1 = reverseInteger(integer_1);
	int answer_2 = reverseInteger(integer_2);
	
	return answer_1 + answer_2;
	
	
}
int main(){
	
	int arr1[5] = {3,1,0,7,5};
	int arr2[6] = {1,1,1,1,1,1};
	int finalSum = sumOfTwoArrays(arr1 , 5 , arr2 , 6);
	cout<<"Sum of two Arrays is::"<<finalSum;
	
	return 0;
}
