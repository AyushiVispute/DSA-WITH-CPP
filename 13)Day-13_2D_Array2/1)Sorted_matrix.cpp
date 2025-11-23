#include<iostream>
using namespace std;

	   bool search(int mat[][4],int n,int m,int key){
	   	int i=0,j=m-1;
	   	
	   	while(i<n && j>=0){
	   	if(mat[i][j]==key){
	   		cout<<"key found at("<<i<<","<<j<<")\n";
	   		return true;
		   }
		   else if(mat[i][j]>key){
		   	j--;
		   } else{
		   	i++;
		   }
		}
		
		   cout<<"Key not found\n";
		   return false;
	   }
    
     
	  int main(){
	  	int matrix[4][4]={{1,2,3,4},
		  				  {5,6,7,8},
		  				 {9,10,11,12},
		  				 {13,14,15,16}};
		
		search(matrix,4,4,1);
	  	return 0;
	  }

// output:key found at(0,0)