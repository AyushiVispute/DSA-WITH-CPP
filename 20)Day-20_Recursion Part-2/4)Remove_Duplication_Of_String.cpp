#include <iostream>
#include <string>
#include<vector>
using namespace std;

void removedup(string str,string ans,int i,int map[26]){
	if(i==str.size()){
		cout<<"ans:"<<ans<<endl; //base Case
		return;
	}
	int mapIdx=(int)(str[i]-'a');
	
	if(map[mapIdx]){//duplicate
		removedup(str,ans,i+1,map);
	}
	else{//non duplicate
		map[mapIdx]=true;
		removedup(str,
		ans+str[i],i+1,map);
	}
}

int main(){
	string str="appnnacollege";
	string ans="";
	int map[26]={false};
	removedup(str,ans,0,map);
	return 0;
	
	
}

// output:
// ans:apncoleg