#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cin>>str;
	long long left,right;
	int pos;
	left=right=0;
	int i=0;
	int length=str.length();
	while(i<length){
		if(str[i]=='^'){
			pos=i;
			break;
		}
		i++;
	}
	i=0;
	while(i<pos){
		if(str[i]!='='){
			left+=(str[i]-48)*(pos-i);
		}
		i++;
	}
	i++;
	while(i<length){
		if(str[i]!='='){
			right+=(str[i]-48)*(i-pos);
		}
		i++;
	}
	if(left==right){
		cout<<"balance"<<endl;
	}
	else if(left<right){
		cout<<"right"<<endl;
	}
	else{
		cout<<"left"<<endl;
	}
	return 0;
}
