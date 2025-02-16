#include<stdio.h>

void fib(int); // declaration of fib

int main(void){
    fib(20);   // calling fib
    return 0;
}

void fib(int n){  // defination of fib
    int a = 0, b = 1, next;
    if(n>=2){
        printf("%d %d ", a,b);
        for (int i = 2; i < n; i++)
        {
            next = a + b;
            printf("%d ",next);
            a = b;
            b = next; 
        }
    }
    else
    printf("%d ",0);

    
    
}
