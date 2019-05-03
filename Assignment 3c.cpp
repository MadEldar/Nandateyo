#include<stdio.h>
int main(){
	int number;
	printf("Hay nhap 1 so: ");
	scanf("%d",&number);
	int i=1,j=0;
	while(i<=number){
		if(number%i==0){
			j++;
			if(j>=3){
				printf("%d khong phai so nguyen to",number);
				return 0;
			}
		}
		i++;
	}
	printf("%d la so nguyen to",number);	
	return 0;
}
