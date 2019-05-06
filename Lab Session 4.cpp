#include<stdio.h>
int main(){
	int nb;
	printf("Hay nhap 1 so: ");
	scanf("%d",&nb);
	if(nb<=2){
		printf("\nKhong co so nguyen to nho hon %d",nb);
		return 0;
	}
	printf("Cac so nguyen to nho hon %d la: ",nb);
	int i=1,j=0,k=0;
	while(i<nb){
		for(k=0,j=1;j<=i;j++){
			if(i%j==0)	k++;
			}
		if(k==2){
			printf("%d ",i,nb);
		}
		i++;
	}
	return 0;
}
