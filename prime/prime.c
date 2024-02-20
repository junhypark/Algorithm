#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TRUE 1
#define MAX 9999

int is_prime(int n){
    int i, sqr;
    sqr = (int)sqrt(n);
    for(int i = 2; i <= sqr; i++){
        if(n%i==0){
            return !TRUE;
        }
    }
    return TRUE;
}

int get_prime(int n){
    int* iptr;
    int i,j;
    
    iptr = (int*)calloc(MAX, sizeof(int));
    if(iptr == NULL){
        puts("\n Memory allocation error!");
        exit(1);
    }
    
    for(i=2; i<MAX; i++){
        if(iptr[i] == 1)
            continue;
        j=i;
        while((j+=i) <= MAX)
            iptr[j] = 1;
    }

    for (i=2; i<=MAX; i++){
        if(iptr[i] == 0)
            printf("\t%6d", i);
    }
}

//This iptr makes MAX num's 0
//if j+i which will be i+i must be not prime (can be divided by i)

void main(void){
    int x;
    scanf("put number %d\n\n", &x);
    printf("Result 1 is %d\n", is_prime(x));
    printf("Result 2 is\n");
    get_prime(x);
}