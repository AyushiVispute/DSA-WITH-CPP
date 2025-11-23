
#include<iostream>
using namespace std;

	   
    
     
	  int main(){
	  	int mat[4][4]={{1,2,3,4},
		  				  {5,6,7,8},
		  				 {9,10,11,12},
		  				 {13,14,15,16}};
		
		cout<<mat<<"="<<&mat[0][0]<<endl;
		cout<<mat+1<<"!="<<&mat[1][0]<<endl;
		cout<<mat+1<<"="<<&mat[0][1]<<endl;
		return 0;
	
	  }
	
// output:0x6ffe10=0x6ffe10
// 0x6ffe20!=0x6ffe20
// 0x6ffe20=0x6ffe14
//2D Array name behave as row pointer