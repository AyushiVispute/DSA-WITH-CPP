#include <iostream>
using namespace std;

void funcInt(){
	int *ptr=new int; //when we creating dyanamic array
	*ptr=5;
	
	cout<<*ptr;
	
	delete ptr;//we must delete it 
}
void funcArr(){
	int size;
    cout << "Enter size of array: ";
    cin>>size;
    int *arr=new  int[size];
    
    //access
    int x=1;
    for(int i=0;i<size;i++){
    	arr[i]=x;
    	cout<<arr[i]<<" ";
    	x++;
	}
	cout<<endl;
}
int main(){
	funcInt();
	return 0;
}
    




// output:5