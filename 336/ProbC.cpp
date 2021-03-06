#define MAX 1000000000
#include<iostream>
#include<cstdio>
#include<cmath>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int N;
	scanf("%d",&N);
	int limit=log2(MAX);
	vector<long> arr(N);
	vector<long>::iterator it1,it2,it3;
	long val[limit];
	int i=0;
	while(i<limit){
		val[i]=(long)pow(2,i);
		i++;
	}
	i=0;
	while(i<N){
		scanf("%ld",&arr[i]);
		i++;
	}
	sort(arr.begin(),arr.end());
	i=0;
	long long ans,temp;
	int j=limit-1;
	it1=lower_bound(arr.begin(),arr.end(),val[j]);
	it3=it1;
	ans=*it1&*it1;
	it1++;
	while(it1<arr.end()){
		ans=*it1 & ans;
		it1++;
	}
	if(ans%val[j]==0){
		printf("%d",arr.end()-it3);
		while(it3!=arr.end()){
			printf("%ld ",*it3);
			it3++;
		}
		printf("\n");

	}
	else{
		j--;
		while(j>=0){
			it2=it3;
			it1=it3=lower_bound(arr.begin(),arr.end(),val[j]);
			temp=*it1;
			while(it1!=it2){
				temp=temp & *it1;	
				it1++;
			}
			if(temp%val[j]==0){
				printf("%d\n",(it2-it3));
				while(it3!=it2){
					printf("%ld ",(*it3));
					it3++;
				}
				printf("\n");
				break;
			}
			else{
				j--;
			}
		}
	}	
	return 0;
}
