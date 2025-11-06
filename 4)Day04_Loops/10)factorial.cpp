#include<iostream>
using namespace std;

int main(){
	int n;
	int fact=1;
	
	cout<<"Enter the no:";
	cin>>n;
	for(int i=1;i<=n;i++){
		fact=fact*i;
		}
	cout<<"factorial is:"<<fact;
	return 0;
}
// output:Enter the no:4
// factorial is:24