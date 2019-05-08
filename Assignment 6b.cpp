#include<stdio.h>
int main(void){
	int n;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	int list[n];
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d: ",i+1);
		scanf("%d",&list[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(list[i]>list[j]){
				int temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
	printf("Mang sau khi sap xep la:");
	for(int i=0;i<n;i++){
		printf(" %d",list[i]);
	}
	return 0;
}
