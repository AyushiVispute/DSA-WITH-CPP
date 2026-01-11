#include <iostream>
#include <string>
#include <vector>
using namespace std;

void merge(int arr[],int si,int mid,int ei){ //O(n)
	vector<int> temp;
	int i=si;
	int j=mid+1;
	while(i<=mid && j<=ei){
		if(arr[i]<=arr[j]){
			temp.push_back(arr[i]);
			i++;
	} else{
		   temp.push_back(arr[j]);
		   j++;
	}
}
	
	//remaining left part
	while(i<=mid){
		temp.push_back(arr[i]);
		i++;
	}
	while(j<=ei){
		temp.push_back(arr[j]);
		j++;
	}	
	
	//vector copy-> org.arr
	for(int idx=si,x=0; idx<=ei; idx++){ //org arr
		arr[idx]=temp[x++];	
		
	}
}

void mergeSort(int arr[],int si,int ei){ //O(nlogn)
	if(si>=ei){
		return; //Base case;
	}
	
	int mid=(si+ei)/2;//si+(ei-si)/2    //1)Divide arr in two parts
	mergeSort(arr,si,mid);//left partition
	mergeSort(arr,mid+1,ei);//right partition
	
	merge(arr,si,mid,ei);  //2)conquer
		
}
 void printArr(int arr[],int n){
 	for(int i=0;i<n;i++){
 		cout<<arr[i]<<" ";
	 }
	 cout<<endl;
 }
int main(){
	int arr[6]={2,5,4,3,7,9};
	int n=6;
	mergeSort(arr,0,n-1);
	printArr(arr,n);
	return 0;
}

// output:
// 2 3 4 5 7 9