#include<iostream>
using namespace std;

int sum(int a,int b){ //a,b, are parameter
	int sum=a+b;
	return sum;
}
int diff(int a,int b){
	int diff=a-b;
	return diff;
}

int main(){
	int c=sum(2,3);//2,3 are arguments
	cout<<"Sum is:"<<c;

    int d=diff(5,3);
    cout<<"\ndiff is:"<<d<<endl;
    return 0;
}
// output:
// Sum is:5
// diff is:2