#include<stdio.h>
#include<string.h>
int main(void){
    char str[100];
    printf("Enter the string to reverse - ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str)/2; i++)
    {
        char temp = str[i];
        str[i] = str[strlen(str) - i -1];
        str[strlen(str) - i - 1] = temp;
    }
    printf("Reversed string - %s",str);
    
}