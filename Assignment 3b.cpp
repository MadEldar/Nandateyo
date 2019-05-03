#include<stdio.h>
int main(void){
	int number;
	printf("Hay nhap 1 so: ");
	scanf("%d",&number);
	int i=1;
	printf("Uoc cua %d la: ",number);
	while(i<=number){
		if(number%i==0){
			printf("%d ",i);
		}
		i++;
	}
	return 0;
}
