#include<iostream>
using namespace std;

	void printArray(int *arr,int n){
		for(int start=0;start<n;start++){
			for(int end=start;end<n;end++){
				for(int i=start;i<=end;i++){
				cout<<arr[i];
			} 
			cout<<",";
		}	
		cout<<endl;
	}
}
	int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	
	printArray( arr, n);
	return 0;
}

// output:
// 1,12,123,1234,12345,
// 2,23,234,2345,
// 3,34,345,
// 4,45,
// 5,