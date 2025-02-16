#include<stdio.h>
int main(void){
    int num;
    int binaryarr[32];
    int flag = 0;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("decimal - %d \n",num);
    printf("binary - ");
    for (int i = 31; i >=0  ; i--)
    {
        int bit = num>>i & 1;
        binaryarr[31 - i] = bit;
    }
    for (int i = 0; i < 32; i++)
    {
        if(binaryarr[i]){ // logic to remove preciding zeroes
            flag =1;
        }
        if(flag){
            printf("%d",binaryarr[i]);
        }
        
    }
    
    printf("\n");
    
    printf("octal - %o \n",num);
    printf("hexa - %X \n",num);

    return 0;
}