//print sum of first N natural number

#include<iostream>
using namespace std;

int main(){
	int n=5;
	int sum=0;
	for (int i=1;i<=n;i++){
		sum+=i;
		
	}
	cout<<"Total sum is:"<<sum;
	return 0;
}
// output:
// Total sum is:15