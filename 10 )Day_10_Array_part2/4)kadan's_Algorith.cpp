#include<iostream>
using namespace std;

	void maxsumArr(int *arr,int n){
		int maxSum=	INT_MIN;
		int currSum=0;
		for(int i=0;i<n;i++){ //start:2
				currSum+=arr[i];
				maxSum=max(maxSum,currSum);
				if(currSum<0){
					currSum=0;//kadan's algo (eg:-7+2=-5   currSum value become -5 so it reinitialised to 0)
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

// output:Maximun Sum of Array is:7

// time complexity:O(n) // it is very fast algorithm