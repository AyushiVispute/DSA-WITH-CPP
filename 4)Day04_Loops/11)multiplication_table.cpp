#include<iostream>
using namespace std;

int main(){
	int n;
	int table;
	cout<<"Enter the number which you want table:";
	cin>>n;
	for(int i=1;i<=10;i++){
		cout<<n*i<<endl;
 	}
	return 0;
}
// output:
// Enter the number which you want table:18
// 18
// 36
// 54
// 72
// 90
// 108
// 126
// 144
// 162
// 180