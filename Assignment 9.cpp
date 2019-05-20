#include<stdio.h>
int main(void){
    int list1[4][4];
    int k=0;
    printf("Nhap ma tran thu nhat:\n");
    for(int i=0; i<4; i++){
    	for(int j=0; j<4; j++){
    		printf("So thu %d: ", i*4+j+1);
	   		scanf("%d", &list1[i][j]);
			// list1[i][j]=++k;
    	}
    }
    k=0;
    int list2[4][4], tong[4][4], hieu[4][4];
    printf("Nhap ma tran thu hai:\n");
    for(int i=0; i<4; i++){
    	for(int j=0; j<4; j++){
    		printf("So thu %d: ", i*4+j+1);
 	  		scanf("%d", &list2[i][j]);
			// list2[i][j]=++k;
    	}
    }
    printf("\n    Ma tran thu nhat la:				    Ma tran thu 2 la:\n");
    for(int i=0; i<4; i++){
    	for(int j=0; j<4; j++){
    		printf("%8d ", list1[i][j]);
    	}
    	printf("			");	
    	for(int j=0; j<4; j++){
    		printf("%8d ", list2[i][j]);
    	}
    	printf("\n");
    }
    printf("\n    Ma tran tong:					    Ma tran hieu:\n");
    for(int i=0; i<4; i++){
    	for(int j=0; j<4; j++){
    		printf("%8d ", list1[i][j] + list2[i][j]);
    	}
    	printf("			");	
    	for(int j=0; j<4; j++){
    		printf("%8d ", list1[i][j] - list2[i][j]);
    	}
    	printf("\n");
    }
    int tich[4][4];
    printf("\n    Ma tran tich:\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
        	tich[i][j]=0;
        	for(int k=0; k<4; k++){
        		tich[i][j] += list1[i][k] * list2[k][j];
        	}
    		printf("%8d ", tich[i][j]);
    	}
    	printf("\n");
    }
    return 0;
}
