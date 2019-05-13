#include<stdio.h>
int main(void){
	int list[10],sum=0;
	int *ptr;
	ptr=&sum;
	for(int i=0;i<10;i++){
		printf("Nhap so thu %d: ",i+1);
		scanf("%d",&list[i]);
		*ptr+=list[i];
	}
	float S=*ptr/10;
	printf("Gia tri trung binh cua mang la: %.1f",S);
	return 0;
}

