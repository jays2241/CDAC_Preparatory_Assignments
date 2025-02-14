#include<stdio.h>
int main(void){
    int marks;
    char *grade;
    printf("Enter your marks ");
    scanf("%d",&marks);

    if (marks>= 90){
        grade = "Ex";
    }
    else if(marks>= 80 && marks<90){
        grade = "A";
    }
    else if(marks>= 70 && marks < 80){
        grade = "B";
    }
    else if(marks>=60 && marks < 70){
        grade = "C";
    }
    else {
        grade = "F";
    }
    printf( "%s",grade);
    return 0;
}