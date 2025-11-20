//we print Array using Arithmetic Pointer

#include<iostream>
using namespace std;

	void printArray(int *ptr,int n){
		for(int i=0;i<n;i++){
			cout<<*(ptr+i)<<endl; //i=0,1,2,3...ptr+0,ptr+1..
		}	
	}

	int main(){
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	
	printArray( arr, n);
	return 0;
}
// output:
// 1
// 2
// 3
// 4
// 5
// 6