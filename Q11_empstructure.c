#include<stdio.h>

struct Employee
    {
        char first_name[50];
        char last_name[50];
        double salary;
    };

void emp_initalize(struct Employee* e);
void emp_disp(struct Employee *e);
void emp_salary_hike(struct Employee* e, int hike);

int main(void){
    struct Employee e;
    emp_initalize(&e);
    printf("Before hike-------------------\n");
    emp_disp(&e);
    emp_salary_hike(&e,10);
    printf("After hike--------------------\n");
    emp_disp(&e);
    return 0;
}


void emp_initalize(struct Employee *e){

    printf("Enter Employee First Name - ");
    scanf("%s",e->first_name);
    printf("Enter Employee Last Name - ");
    scanf("%s",e->last_name);
    printf("Enter Employee Salary - ");
    scanf("%lf",&e->salary);

}
void emp_disp(struct Employee *e){

    printf("First name - %s \n",e->first_name);
    printf("Last name - %s \n",e->last_name);
    printf("Salary - %lf \n",e->salary);
}

void emp_salary_hike(struct Employee* e, int hike){
    e->salary = e->salary + (e->salary*hike/100); 
}