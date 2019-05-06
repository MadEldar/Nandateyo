#include<stdio.h>
int main(void){
	long long list[100],i=2;
	list[0]=1;
	list[1]=2;
	for(i=2;i<100;i++){
		list[i]=list[i-1]+list[i-2];
	}
	printf("So thu 100 co gia tri %lld",list[i-1]);
	return 0;
}
