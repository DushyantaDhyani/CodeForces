#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	long long sum[N],total;
	memset(sum,0,sizeof(sum));
	int i;
	int a,b,c;
	for(i=0;i<M;i++){
		scanf("%d %d %d",&a,&b,&c);
		sum[a-1]-=c;
		sum[b-1]+=c;
	}
	i=0;
	total=0;
	while(i<N){
		if(sum[i]>=0){
			total+=sum[i];
		}
		i++;
	}
	cout<<total<<endl;
	return 0;
}
