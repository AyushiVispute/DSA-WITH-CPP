#include <iostream>
using namespace std;

void oddEven(){
	int num;
	cout<<"Enter a No:";
	cin>>num;
		if(!(num & 1)){
			cout<<"No is Even";
		}else{
			cout<<"No is Odd";
		}
	}

int main(){
	oddEven();
	return 0;
}
	
// output:
// Enter a No:8
// No is Even