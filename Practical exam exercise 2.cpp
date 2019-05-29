#include<stdio.h>

void isPrime(int);

int main(void){
    int beg, end;
    printf("Enter two natural number as the beginning and the end: ");
    scanf("%d%d", &beg, &end);
    while(beg<2 || end<=beg){
    	printf("Invalid numbers, please enter again: ");
    	scanf("%d%d", &beg, &end);
    }
    for(int i=beg; i<=end; i++){
    	isPrime(i);
    }
    return 0;
}

void isPrime (int number){
	int ctr = 0;
	for(int i=1; i<=number; i++){
		if(number%i == 0 && ctr<3){
			ctr++;
		}
	}
	if(ctr<3){
		printf("%d\n", number);
	}
}
