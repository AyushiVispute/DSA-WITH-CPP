#include <iostream>
using namespace std;

int main(){
	int rows,cols;
	cout<<"Enter row no:";
	cin>>rows;
	cout<<"Enter coloum no:";
	cin>>cols;
	
	int* *matrix=new int*[rows];
	for(int i=0;i<=rows;i++){
		matrix[i]=new int[cols];
	}
	//data store
	int x=1;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			matrix[i][j]=x++;
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;	
}


// output:
// Enter row no:2
// Enter coloum no:3
// 1 2 3
// 4 5 6