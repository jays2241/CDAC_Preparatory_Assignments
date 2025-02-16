#include<stdio.h>
int main(void){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    int fact = 1;
    for (int i = 1; i < n+1; i++)
    {
        fact = fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    
    return 0;
}

