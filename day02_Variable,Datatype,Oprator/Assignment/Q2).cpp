// Build the Simple Interest Calculator. Input:principal(P),rate(R),time(T)Output:(P*R*T)/100

#include <iostream>
using namespace std;
int main (){
	float principle,rate,time;
	cout<<"Lets calculate simple Interest:\n\n";
	cout<<"Enter a Principle:" ;
	cin>>principle;
	cout<<" Enter a rate:";
	cin>>rate;
	cout<<" Enter a time:";
	cin>>time;
	
   float total_interest= (principle*rate*time)/100;
	cout<<"Total Interest is:"<<total_interest<<endl;
	
   return 0;
}

// output:
// Lets calculate simple Interest:

// Enter a Principle:4
//  Enter a rate:2
//  Enter a time:5
// Total Interest is:0.4