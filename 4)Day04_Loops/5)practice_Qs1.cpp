// Q1)print the sum of digits of a number using while loop
// n=10829
#include<iostream>
using namespace std;

int main(){
	int n=10829;
	int sum=0;
	while(n>0){
		int lastdig=n%10;
		sum+=lastdig;
		n=n/10;
		

	}
		cout<<"total sum of digit is:"<<sum;
	
	
	return 0;
}
// output:
// total sum of digit is:20

// Q2) print the sum of odd digit of a number using while loop

#include<iostream>
using namespace std;

int main(){
	int n=10829;
	int sum=0;
	while(n>0){
		int lastdig=n%10;
		if(lastdig%2!=0){
			sum+=lastdig;
		}
		n=n/10;
	}
		cout<<"total sum of odd digit is:"<<sum;
	
	
	return 0;
}
// output:
// total sum of odd digit is:10

// Q3) print reverse of a given number & print the result

#include<iostream>
using namespace std;

int main(){
	int n=10829;
	int res=0;
	while(n>0){
		int lastdig=n%10;
		res=res*10+lastdig;
		n=n/10;
	}
		cout<<"Reverse of no is:"<<res;
	
	
	return 0;
}
// output:
// Reverse of no is:92801