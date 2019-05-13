#include <stdio.h>
int main(){
	int m=-1,n=-1;
	while(m<0||n<0){
		printf("Nhap so hang va so cot: ");
		scanf("%d %d",&m,&n);
	}
	int list1[m][n],list2[m][n];
	printf("Ma tran thu nhat:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("Nhap so tai hang %d cot %d: ",i+1,j+1);
			scanf("%d",&list1[i][j]);
		}
	}
	printf("Ma tran thu hai:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("Nhap so tai hang %d cot %d: ",i+1,j+1);
			scanf("%d",&list2[i][j]);
		}
	}
	printf("Ma tran tong cua 2 ma tran:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%6d", list1[i][j] + list2[i][j]);
		}
		printf("\n");
	}
	printf("Ma tran hieu cua 2 ma tran:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%6d", list1[i][j] - list2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
