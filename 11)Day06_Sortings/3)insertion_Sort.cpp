#include<iostream>
using namespace std;
     
	    void print(int arr[],int n){
    	for(int i=0;i<n;i++){
    		cout<<arr[i]<<" ";
		}
		cout<<endl;
	}

	void InsertionSort(int arr[],int n){
		for(int i=0;i<n;i++){
			int curr=arr[i];
			int prev=i-1;
			while(arr[prev]>=0 && arr[prev]>curr){
				swap(arr[prev],arr[prev+1]);
				prev--;
				}
				
			arr[prev+1]=curr;
		}
			print(arr,n);
}
			

	int main(){
		int arr[6]={4,8,6,9,3,7};
		InsertionSort(arr,6);
		
		
		return 0;
	}


