#include<iostream>
using namespace std;
     
	    void print(int arr[],int n){
    	for(int i=0;i<n;i++){
    		cout<<arr[i]<<" ";
		}
		cout<<endl;
	}

	void countSort(int arr[],int n){
		int freq[10000]={0};//range
		int minval=INT_MAX,maxval=INT_MIN;
		
		//1st step-O(n)
		for(int i=0;i<n;i++){
			freq[arr[i]]++;
			minval=min(minval,arr[i]);
			maxval=max(maxval,arr[i]);
		}
		//2nd step-O(range)=max-min
		for(int i=minval,j=0;i<=maxval;i++){
			while(freq[i]>0){
				arr[j++]=i;
				freq[i]--;
			}
		}
		
		print(arr,n);
		
	}

	int main(){
		int arr[6]={4,5,6,4,7,6};
		countSort(arr,6);
		
		
		return 0;
	}


// output:
// 3 4 6 7 8 9