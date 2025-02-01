//============================================================================
// Name        : final_warrington.cpp
// Author      : Andrew Warrington
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int mySeqSearch(int arr[], int size) {

	// check if array is large enough for given task
	if(size < 2){
		return -1;
	}
	// iterate through array
	// calculate difference between current and previous array item
	// return item matching condition
	for(int i = 1; i < size;++i){
		if(abs(arr[i] - arr[i-1]) > 5){
			return arr[i];
		}
	}
	return -1;
}
int main(){
	int arr[] = {1,4,7,3,5,8,12,17,11,10,6}; // test mySeqSearch with given array
	int size = sizeof(arr) / sizeof(arr[0]); // calculate array size

	int result = mySeqSearch(arr,size);

	if(result != -1){
		cout << "Array item that is 5 greater than the previous: " << result << endl; // output item matching condition
	}
	else{
		cout << "No item that is 5 greater than the previous" << endl;
	}
	return 0;
}
