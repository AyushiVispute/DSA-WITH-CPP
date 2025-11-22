#include<iostream>
using namespace std;

	   int diagonalMat(int mat[][4],int n){
	   	int sum=0;
	   	for(int i=0;i<n;i++){
	   		sum+=mat[i][i];
	   		if(i!=n-i-1){
	   			sum+=mat[i][n-i-1];
	   	      }
		   }
		   cout<<"sum of Diagonal:"<<sum<<endl;
		   return sum;
	   }
     
	  int main(){
	  	int matrix[4][4]={{1,2,3,4},
		  				  {5,6,7,8},
		  				 {9,10,11,12},
		  				 {13,14,15,16}};
		
		diagonalMat(matrix,4);
	  	return 0;
	  }
	


// output:sum of Diagonal:68