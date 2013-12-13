#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int N;
	scanf("%d",&N);
	vector<int> Data(N);
	vector<bool> Flag(N);
	int i=0,j;
	int mid;
	while(i<N){
		scanf("%d",&Data[i]);
		Flag[i]=false;
		i++;
	}
	sort(Data.begin(),Data.end());
	mid=N/2;
	if( (N&1)==1){
		mid++;
	}
	i=mid-1;
	j=N-1;
	while(i>=0 && j>=mid){
		if((2*Data[i]>Data[j])){
			i--;
		}
		else{
			Flag[i]=true;
			i--;j--;
		}
	}
	i=0;
	int count=0;
	while(i<N){
		if(!Flag[i]){
			count++;
		}
		i++;
	}
	printf("%d\n",count);
	return 0;
}
