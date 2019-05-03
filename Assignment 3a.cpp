#include<stdio.h>
int main(void){
	int i=0,j=0;
	int sum=0;
	int number[100];
	while(j<100){
		if(i%2==1){
			sum+=i;
			j++;
		}
		i++;
	}
	printf("Tong 100 so le dau tien lon hon 0 la %d.",sum);
	return 0;
}
