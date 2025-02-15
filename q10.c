#include<stdio.h>
#include<string.h>

int main(void){
    char names[10][50];
    char temp[50];
    for (int i = 0; i < 10; i++)
    {
        printf("%d Name ",i+1);
        scanf("%s",&names[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        
        for (int j = i+1 ; j < 10; j++)
        {
            if(strcmp(names[i],names[j]) > 0){
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%s ",names[i]);
    }
    
    
    return 0;
}