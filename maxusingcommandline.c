#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if(argc <2){
        printf("You havent entered anything\n");
    }

    else{
        
    printf("you have entered\n");

    for (int i = 1; i < argc; i++)
    {
        printf("%d ",atoi(argv[i]));
    }
    
    int max = atoi(argv[1]); // atoi converts ascii to integer
 
    for (int i = 1; i < argc; i++)
    {
        if(atoi(argv[i]) > max){
            max = atoi(argv[i]);
        }  
    }
    printf("\nmax is %d",max);
}
    return 0;
}