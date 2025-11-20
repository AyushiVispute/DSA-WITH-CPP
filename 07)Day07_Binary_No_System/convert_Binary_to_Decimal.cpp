void binToDec(int binNo){
	int n=binNo;
	int decNum=0;
	int power=1;
	
	while(n>0){
	int	lastdig=n%10;
	decNum+=lastdig*power;
	power=power*2;
	
		n=n/10;
	}
	cout<<decNum<<endl;
	}
int main(){
	binToDec(1111);
	return 0;
	}
