//WAP to find Last occurance of an element in vector

#include <iostream>
#include <string>
#include<vector>
using namespace std;

int lastOccurance(vector<int>arr,int target,int i){
	if(i==arr.size()){
	return -1;   //Base case
	}
	int idxFound=lastOccurance(arr,target,i+1);
	if(idxFound==-1 && arr[i]==target){
		return i;
	}
	return idxFound;
}

int main(){
	vector<int>arr={1,2,3,3,3,4};
	cout<<"Index of:"<<lastOccurance(arr,3,0);
	return 0;
}
// output:
// Index of:4