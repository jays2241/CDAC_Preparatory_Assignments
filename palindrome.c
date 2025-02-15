#include<stdio.h>
#include<string.h>
int main(void){
    char str[50];
    
    int flag =0;
    printf("Enter string to check palindrome ");
    scanf("%49s",str);
   
    for (int i = 0; i < strlen(str)/2; i++)
    {
        if (str[i] != str[strlen(str)-i-1])
        {
            flag = 1;
            break;
        }
        
    }
    if (flag)
    {
        printf("not a palindrome");
    }
    else{
        printf("Palindrome");
    }
    
    
    
    return 0;
}