// Qs) WAP where user can keep entering number till they enter a multiple of 10
#include<iostream>
using namespace std;

int main(){
	int n;
	do{
		cout<<"Enter a number:";
		cin>>n;
		if(n%10==0){
			continue;
		}
		cout<<"you entered:"<<n<<endl;
	}while(true);
	return 0;
}


// output:
// Enter a number:34
// you entered:34
// Enter a number:56
// you entered:56
// Enter a number:20
// Enter a number:56
