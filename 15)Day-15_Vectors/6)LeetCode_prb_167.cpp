#include <iostream>
#include <vector>
using namespace std;

vector<int>pairSum(vector<int>arr,int target){

	int start=0,end=arr.size()-1;
	int currSum=0;
	vector<int>ans;//new vector
	
	while(start<end){
		currSum=arr[start]+arr[end];
		if(currSum==target){
			ans.push_back(start);
			ans.push_back(end);
			return ans;
		}
		else if(currSum>target){
			end--;
			
		}else{
			start++;
		}
	}
	return ans;
}
int main(){
	vector<int>vec={2,7,11,15};
	int target=9;
	vector<int>ans=pairSum(vec,target);
	cout<<ans[0]<<","<<ans[1]<<endl;
	return 0;
}

// output:0,1