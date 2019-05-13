#include <stdio.h>
int main()
{
	int list[4][4];
	int sumMax=0,hangMax;
	for(int i=0;i<4;i++){
		int sum=0;
		for (int j = 0; j < 4; j++){
			printf("Nhap so tai hang %d cot %d: ",i+1,j+1 );
			scanf("%d",&list[i][j]);
			sum+=list[i][j];
		}
		if (sumMax<sum){
			sumMax=sum;
			hangMax=i+1;
		}
	}
	printf("Hang %d co tong gia tri lon nhat voi tong = %d",hangMax,sumMax);
	return 0;
}
