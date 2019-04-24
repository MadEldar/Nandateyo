#include<stdio.h>
int main(void){
	int nb1,nb2,nb3;
	int min=0,max=0;
	printf("Enter 3 numbers\n");
	scanf ("%d%d%d",&nb1,&nb2,&nb3);
	min=nb1;
	if(min>nb2)		min=nb2;
	if(min>nb3)		min=nb3;
	max=nb1;
	if(max<nb2)		max=nb2;
	if(max<nb3)		max=nb3;
	printf("The smallest number is %d\nThe biggest number is %d",min,max);
	return 0;
}
