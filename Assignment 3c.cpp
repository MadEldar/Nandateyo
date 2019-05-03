#include<stdio.h>
int main(){
	int nb;
	printf("Hay nhap 1 so: ");
	scanf("%d",&nb);
	if(nb<2){
		printf("\n%d khong phai so nguyen to",nb);
		return 0;
	}
	int i=1,j=0;
	while(i<=nb){
		if(nb%i==0){
			j++;
			if(j>=3){
				printf("\n%d khong phai so nguyen to",nb);
				return 0;
			}
		}
		i++;
	}
	printf("%d la so nguyen to",nb);	
	return 0;
}
