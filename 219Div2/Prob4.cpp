#include<iostream>
#include<cstdio>
using namespace std;
int N,M;
char str[40][41];
int main(){
	int Q;
	int A,B,C,D;
	scanf("%d %d %d",&N,&M,&Q);
	int i=0;
	int count=0;
	int length,breadth;
	while(i<N){
		scanf("%s",str[i]);
		i++;
	}
	while(Q>0){
		scanf("%d %d %d %d",&A,&B,&C,&D);
		length=C-A+1;
		breadth=D-B+1;
		
		Q--;
	}
	return 0;
}
