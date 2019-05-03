#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap 3 canh cua tam giac: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b)
	printf("\nDay la 3 canh cua tam giac vuong.");
	else
	printf("\nDay khong phai 3 canh cua tam giac vuong.");
	return 0;
}
