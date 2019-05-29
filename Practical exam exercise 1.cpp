#include<stdio.h>

int isPrime(int);

int main(void){
    int number;
    printf("Enter a number larger than 1: ");
    scanf("%d", &number);
    while(number <=1 ){
    	printf("Invalid number, please enter again\n");
    	scanf("%d", &number);
    }
    int prime = isPrime(number);
    if(prime){
        printf("%d is a prime number.\n", number);
    }else{
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}

int isPrime(int a){
    int ctr = 0;
    for(int i=1; i<=a; i++){
        if(a%i == 0 && ctr < 3){
            ctr++;
        }
    }
    if(ctr == 2){
        return 1;
    }else{
        return 0;
    }
}