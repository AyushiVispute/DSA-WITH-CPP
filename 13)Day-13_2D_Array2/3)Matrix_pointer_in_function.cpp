#include<iostream>
using namespace std;
	
	void func(int mat[][4],int n,int m){
		cout<<"0th row ptr:"<<mat<<endl;
		cout<<"1st row ptr:"<<mat+1<<endl;
		cout<<"2nd row ptr:"<<mat+2<<endl; //address of row	
	     cout<<endl;
		cout<<"0th row value:"<<*mat<<endl;
		cout<<"1st row value:"<<*(mat+1)<<endl;
		cout<<"2nd row value:"<<*(mat+2)<<endl; 
		cout<<endl;
		
		cout<<*(*(mat+2)+2)<<endl;  //value of particular index

}

    
     
	  int main(){
	  	int mat[4][4]={{1,2,3,4},
		  				  {5,6,7,8},
		  				 {9,10,11,12},
		  				 {13,14,15,16}};
		  	
	    func(mat,4,4);

		
	  	return 0;
	  }
	

// output:
// 0th row ptr:0x6ffe10
// 1st row ptr:0x6ffe20
// 2nd row ptr:0x6ffe30

// 0th row value:0x6ffe10
// 1st row value:0x6ffe20
// 2nd row value:0x6ffe30

// 11 (index value of matrix)