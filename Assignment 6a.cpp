#include<stdio.h>
int main(void){
	int list[10],sum=0;
	for(int i=0;i<10;i++){
		printf("Nhap so thu %d: ",i+1);
		scanf("%d",&list[i]);
		sum+=list[i];
	}
	float S=sum/10;
	printf("Gia tri trung binh cua mang la: %0.1lf",S);
	return 0;
}
