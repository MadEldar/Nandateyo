#include<stdio.h>
int main(){
	int a;
	printf("Nhap vao 1 so: ");
	scanf("%d",&a);
	if(a>=2 && a<=7){
		printf("\nHom nay la thu %d",a);
	}else if(a==8){
		printf("\nHom nay la chu nhat");
	}else
		printf("\nDay khong phai 1 ngay trong tuan");
	return 0;
}
