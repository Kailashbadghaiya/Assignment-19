#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    char name[30];
    int id;
    double salary;
} students;

int main()
{
    int n,i;
    printf("Enter a size of student : ");
    scanf("%d",&n);
    //array to store structure values of all employees
     students students[n];
    //Taking each employee detail as input
    printf("Enter %d student Details \n \n",n);
    for(i=0; i<n; i++)
        {
        printf("student %d:- \n",i+1);

        printf("Name: ");
        scanf("%s",students[i].name);

        printf("Id: ");
        scanf("%d",&students[i].id);

        printf("Salary: ");
        scanf("%lf",&students[i].salary);

        char ch = getchar();

        printf("\n");
    }

    //Displaying Employee details
    printf("-------------- All students Details ---------------\n");
    for(i=0; i<n; i++)

    {
        printf("Name \t: ");
        printf("%s \n",students[i].name);

        printf("Id \t: ");
        printf("%d \n",students[i].id);

        printf("Salary \t: ");
        printf("%.2lf \n",students[i].salary);

        printf("\n");
    }

    return 0;
}
