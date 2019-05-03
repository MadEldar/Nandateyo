#include<stdio.h>
int main(void){
	int nb;
	printf("Nhap vao 1 so: ");
	scan("%d",&nb);
	if(nb<0)
	printf("%d la so am",nb);
	else
	printf("%d la so duong");
}
