#include<stdio.h>
#include<string.h>
int isupperlowerdigit(char);
int main(void){
    char in[100];

    printf("Enter the charatcter ");
    scanf("%s", in);

    int uppercase = 0;
    int lowercase = 0;
    int digit = 0;
    int other = 0;

    for (int i = 0; i < strlen(in); i++)
    {
        switch (isupperlowerdigit(in[i]))
        {
        case 1:
            uppercase+=1;
            break;
        case 2:
            lowercase+=1;
            break;
        case 3:
            digit+=1;
            break; 
        
        default:
            other+=1;
            break;
        }
    }
    printf("Uppercase count %d \n",uppercase);
    printf("Lowecase count %d \n",lowercase);
    printf("Digit count %d \n",digit);
    printf("Other count %d \n",other);
    return 0;

}

int isupperlowerdigit(char c){
    if(c>='A' && c<='Z'){
        return 1;
    }
    else if(c>='a' && c<='z'){
        return 2;
    }
    else if (c>='0' && c<='9'){
        return 3;
    }
    else{
    return 4;
    }

    
}