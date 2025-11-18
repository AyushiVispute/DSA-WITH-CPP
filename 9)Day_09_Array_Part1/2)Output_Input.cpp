#include<iostream>
using namespace std;


int main(){
	
	int n;
	cout<<"Enter length of array:";
	cin>>n;
	
	int arr[n];
	
	for(int i =0;i<n;i++){ //input
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){//output
		cout<<arr[i]<<",";
	}
	cout<<endl;
	return 0;
	
}
// output:
// Enter length of array:5
// 1 2 3 4 5
// 1,2,3,4,5,