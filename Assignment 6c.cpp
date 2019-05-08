#include<stdio.h>
int main(void){
	int list[10];
	for(int i=0;i<10;i++){
		printf("Nhap so thu %d: ",i+1);
		scanf("%d",&list[i]);
	}
	int find,found,j=0;
	printf("Nhap so ban can tim: ");
	scanf("%d",&find);
	for(int i=0;i<10;i++){
		if(list[i]==find){
			found=1;
			j++;
		}
	}
	if(!found){
		printf("So %d khong co trong danh sach",find);
	}else{
		printf("So %d xuat hien %d lan",find,j);
	}
	return 0;
}
