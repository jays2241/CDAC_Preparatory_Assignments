#include<stdio.h>
#include<string.h>
int main(void){
    char str[100];
    
    int counter[26] = {0};
    printf("Enter the string ");
    scanf("%s",str);
    for (int i = 0; str[i] != '\0' ; i++)
    {
        char ch = str[i];
    
        if (ch>='A' && ch<='Z')
        {
            ch = ch + 32; // TO CONVERT UPPERCASE TO LOWER ('a' - 'A')
        }
        if (ch>='a' && ch<='z')
        {
            counter[ch - 'a']++;   // if ch is a which is 97 and 'a' is also 97 then 0th index ans so on 
        }
        
    }

    for (int i = 0; i < 26; i++)
    {
        if (counter[i]>0)
        {
            printf("%c count is %d\n",'A'+ i,counter[i]);
        }
        
    }
    

    return 0;
}