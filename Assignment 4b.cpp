#include<stdio.h>
int main(void){
	double list[100];
	int i=2;
	list[0]=0.00;
	list[1]=1.00;
	for(i=2;i<100;i++){
		list[i]=list[i-1]+list[i-2];
		printf("So thu 100 co gia tri %.0lf\n",list[i-1]);
	}
	return 0;
}
