#include<stdio.h>
int main(){
	long int x,y,c;
	
	long x1,y1;
	long zero=0;
	scanf("%ld %ld",&x,&y);
	if(x>0){
		if(y>0){
			c=x+y;
			x=c;
			y=c;
		}
		else{
			c=y-x;
			x=-1*c;
			y=c;
		}
	}
	else{
		if(y>0){
			c=y-x;
			y=c;
			x=-1*c;
		}
		else{
			c=x+y;
			x=c;
			y=c;
		}
	}
	
	
		if(x<0){
			printf("%ld %ld %ld %ld\n",x,zero,zero,y);
		}
		else{
			printf("%ld %ld %ld %ld\n",zero,y,x,zero);
		}
	return 0;
}
