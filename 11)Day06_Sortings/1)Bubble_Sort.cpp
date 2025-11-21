#include<iostream>
using namespace std;

    void print(int arr[],int n){
    	for(int i=0;i<n;i++){
    		cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	void bubbleSort(int arr[],int n){
		for(int i=0;i<n-1;i++){
			bool isSwap=false;
			for(int j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
					swap(arr[j],arr[j+1]);
					isSwap=true;
				}
				
			}
			if(!isSwap){
				//array is already sorted
				break;
			}
			
		}  print(arr, n);
	}

	int main(){
		int arr[6]={4,8,6,9,3,7};
		bubbleSort(arr,6);
		
		
		return 0;
	}


// output:
// 3 4 6 7 8 9