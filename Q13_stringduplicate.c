#include<stdio.h>
#include<string.h>
int main(void){
    char *arr[] = {"hii","how are you","hello","hii","hello"};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            int cmp = strcmp(arr[i],arr[j]);

            if(cmp == 0){
                printf("(%s) is duplicate\n",arr[i]);
            }
        }
        
    }
    
    return 0;
}