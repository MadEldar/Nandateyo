#include<stdio.h>
int main(void){
	int n;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	while(n<2){
		printf("So luong qua thap, hay nhap lai: ");
		scanf("%d",&n);
	}
	int list[n];
	int *ptr;
	ptr=list;
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d: ",i+1);
		scanf("%d",&*(ptr+i));
		for(int j=0;j<i;j++){
			if(*(ptr+i)==*(ptr+j)){
				printf("So bi trung, hay nhap lai\n");
				i--;
			}
		}
	}
	printf("Mang sau khi sap xep la:");
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(list[i]>list[j]){
				int temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
		printf(" %d",*(ptr+i));
	}
	return 0;
}
