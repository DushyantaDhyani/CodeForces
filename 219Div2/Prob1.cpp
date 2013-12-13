#include <cmath>
#include <cstdio>
#include<cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int N,j;
	scanf("%d",&N);
	int arr[10];
	memset(arr,0,sizeof(arr));
	char str[4][5];
	int i=0;
	while(i<4){
		scanf("%s",str[i]);
		j=0;
		while(j<4){
			if(str[i][j]!='.'){
				arr[str[i][j]-'0']++;
			}
			j++;
		}
		i++;
	}
	i=1;
	while(i<=9){
		if(arr[i]>(2*N)){
			break;
		}
		i++;
	}
	if(i>9){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
    return 0;
}

