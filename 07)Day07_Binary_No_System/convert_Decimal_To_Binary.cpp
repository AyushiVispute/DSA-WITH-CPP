#include<iostream>
using namespace std;

void decToBin(int decNo){
	int n=decNo;
	int binNum=0;
	int power=1;
	
	while(n>0){
	int	rem=n%2;
	binNum+=rem*power;
	power=power*10;
	
		n=n/2;
	}
	cout<<binNum<<endl;
	}
	int main(){
		decToBin(15);
	

		return 0;
	}

    // output:1111