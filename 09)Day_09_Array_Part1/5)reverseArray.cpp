//without extra space
//creating two pointer name as start and end

#include<iostream>
using namespace std;

int reverseArray(int *arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}cout<<endl;
}

int main(){
	
	int  arr[]={5,4,3,9,2};
	int n=sizeof(arr)/sizeof(int);
	
	int start=0;
	int end=n-1;
	
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	
	reverseArray(arr,n);
	
	return 0;
	
}
// output:2,9,3,4,5,
