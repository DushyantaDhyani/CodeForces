#include<iostream>
using namespace std;
long long getMax(long long Num){
	long long temp;
	temp=0;
	while(Num>0){
		Num=Num/10;
		temp=temp*10+9;
	}
	return temp;
}
int getLength(long long num){
	int len=0;
	while(num>0){
		len++;
		num=num/10;
	}
	return len;
}
int main(){
	long long W,M,K;
	cin>>W>>M>>K;
	long long max,count=0;
	int len=0;
	max=getMax(M);
	while(W>0){
		len=getLength(M);
		if((max-M)*K*len<=W){
			count+=(max-M+1);
			W-=(max-M+1)*len*K;
			M=max+1;
			max=max*10+9;
		}
		else{
			count+=(W/(K*len));
			break;
		}
	}
	cout<<count<<endl;
	return 0;
}
