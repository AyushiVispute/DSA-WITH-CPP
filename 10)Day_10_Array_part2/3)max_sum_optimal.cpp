#include<iostream>
using namespace std;

	void maxsumArr(int *arr,int n){
		int maxSum=	INT_MIN;
		for(int start=0;start<n;start++){ //start:2
			int currSum=0;
			for(int end=start;end<n;end++){//end=2,3,4,5
				currSum+=arr[end];
				maxSum=max(maxSum,currSum);
		}
	}  
	 cout<<"Maximun Sum of Array is:"<<maxSum<<endl;
	}
	
	int main(){
	int arr[]={2,-3,6,-5,4,2};
	int n=sizeof(arr)/sizeof(int);
	
	maxsumArr( arr, n);
	return 0;
}

// output:
// Maximun Sum of Array is:7

// time complexity:O(n^2)
