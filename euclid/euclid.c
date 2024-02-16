#include <stdio.h>
// u,v (u is the largest int)
// u = u-v
// if u is 0 ? v will be result : exchange u and v
int gcd(int u, int v){
    int temp;
    while(u){
        if(u<v){
            temp = v;
            v = u;
            u = temp;
        }//exchange u and v

        u = u-v;
    }
    return v;
}

int gcd_mod(int u, int v){
    int temp;
    while(u){
        if(u<v){
            temp = v;
            v = u;
            u = temp;
        }//exchange u and v

        u = u%v;
    }
    return v;
}

void main(void){
    int u, v;
    printf("Enter two positive integers\n");
    scanf("%d %d", &u, &v);
    printf("the first result is %d\n", gcd(u, v));
    
    printf("Enter two positive integers\n");
    scanf("%d %d", &u, &v);
    printf("the second result is %d\n", gcd_mod(u, v));
}
//recursion function is not efficient
//since stack will call function and pop it can make a delay
//modular expression reduces times of operations -- gcd_mod