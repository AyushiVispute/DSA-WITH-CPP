// WAP to find first occurance of an element in vector

#include <iostream>
#include <string>
#include<vector>
using namespace std;

int firstOccurance(vector<int>arr,int target,int i){
	if(i==arr.size()){
	return -1;   //Base case
	}
	if(arr[i]==target){
		return i;
	}
	return firstOccurance(arr,target,i+1);
}

int main(){
	vector<int>arr={1,2,3,3,3,4};
	cout<<"Index of:"<<firstOccurance(arr,3,0);
	return 0;
}

//Output:
// Index of:2