#include <iostream>
#include <cstring>

using namespace std;

	bool isPalindrome(char str[],int n){
	  int st=0,end=n-1;
	  while(st<=end){
	  if(str[st++]!=str[end--]){
	  	cout<<"not valid palindrome!\n";
	  	return false;
	  }
	}	
	cout<<"It is Valid palindrome"<<endl;
	return true;
}
	
	int main(){
		char word[]="";
		cout<<"Enter the word:";
		cin>>word;
		isPalindrome(word,strlen(word));
		return 0;

}


// output:
// Enter the word:madam
// It is Valid palindrome