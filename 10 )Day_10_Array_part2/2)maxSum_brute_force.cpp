#include<iostream>
using namespace std;

	void maxsumArr(int *arr,int n){
		int maxSum=	INT_MIN;
		for(int start=0;start<n;start++){
			for(int end=start;end<n;end++){
				int currSum=0;
				for(int i=start;i<=end;i++){
				currSum+=arr[i];
			} 
			cout<<currSum<<",";
			maxSum=max(maxSum,currSum);
		}
			
		cout<<endl;
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
// 2,-1,5,0,4,6,
// -3,3,-2,2,4,
// 6,1,5,7,
// -5,-1,1,
// 4,6,
// 2,
// Maximun Sum of Array is:7

// time complexity:O(n^3)