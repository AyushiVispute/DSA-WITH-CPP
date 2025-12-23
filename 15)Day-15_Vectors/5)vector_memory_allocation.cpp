#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int>vec1={1,2,3,4};
	cout<<"Vector size is:"<<vec1.size()<<"\n";
	cout<<"Vector capacity is:"<<vec1.capacity()<<"\n";
	
	vec1.push_back(4);
	cout<<"Vector size is:"<<vec1.size()<<"\n";
	cout<<"Vector capacity is:"<<vec1.capacity()<<"\n";
	
	return 0;	
}

// output:
// Vector size is:4
// Vector capacity is:4
// Vector size is:5
// Vector capacity is:8