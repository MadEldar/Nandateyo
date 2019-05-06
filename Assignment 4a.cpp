#include<stdio.h>
int main(void){
	int n;
	printf("Hay nhap vao 1 so: ");
	scanf("%d",&n);
	int i=1,sum=0;
	printf("%d co cac nghiem la: ",n);
	for(i=1;i<n;i++){
		if(n%i==0){
			printf("%d ",i);
			sum+=i;
		}
	}
	if(sum==n){
		printf("%d\n%d la mot so hoan hao",n,n);
	}else{
		printf("%d\n%d khong phai mot so hoan hao",n,n);
	}
	return 0;
}
