#include<stdio.h>
int main(void){
	int min,max;
	int list[10];
	printf("Hay nhap 10 so nguyen: ");
	scanf("%d",&list[0]);
	min=max=list[0];
	for (int i=1;i<10;i++){
		printf("Con %d so nua: ",10-i);
		scanf("%d",&list[i]);
		if(list[i]>max)		max=list[i];
		if(list[i]<min)		min=list[i];
	}	
	printf("So lon nhat la %d\nSo nho nhat la %d",max,min);
	return 0;
}
