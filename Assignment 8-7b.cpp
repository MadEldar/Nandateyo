#include <stdio.h>
int main(){
	int m=-1,n=-1;
	while(m<=0||n<=0){
		printf("Nhap so hang: ");
		scanf("%d",&m);
		printf("Nhap so cot: ");
		scanf("%d",&n);
	}
	int list1[m][n],list2[m][n];
	int *ptr1,*ptr2;
	ptr1=&list1[0][0];
	ptr2=&list2[0][0];
	printf("Ma tran thu nhat:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("Nhap so tai hang %d cot %d: ",i+1,j+1);
			scanf("%d",&*(ptr1+i*m+j+i));
		}
	}
	printf("Ma tran thu hai:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("Nhap so tai hang %d cot %d: ",i+1,j+1);
			scanf("%d",&*(ptr2+i*m+j+i));
		}
	}
	printf("Ma tran thu nhat:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%6d",*(ptr1+i*m+j+i));
		}
		printf("\n");
	}
	printf("Ma tran thu hai:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%6d",*(ptr2+i*m+j+i));
		}
		printf("\n");
	}
	printf("Ma tran tong cua 2 ma tran:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%6d", *(ptr1+i*m+j+i) + *(ptr2+i*m+j+i));
		}
		printf("\n");
	}
	printf("Ma tran hieu cua 2 ma tran:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%6d", *(ptr1+i*m+j+i) - *(ptr2+i*m+j+i));
		}
		printf("\n");
	}
	return 0;
}