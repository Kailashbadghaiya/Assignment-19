#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    char name[30];
    int id;
    double salary;
} Employee;

int main()
{
    int n,i;
    printf("Enter a size of employee : ");
    scanf("%d",&n);
    //array to store structure values of all employees
     Employee employees[n];
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
        {
        printf("Employee %d:- \n",i+1);

        printf("Name: ");
        scanf("%s",employees[i].name);

        printf("Id: ");
        scanf("%d",&employees[i].id);

        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        char ch = getchar();

        printf("\n");
    }

    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(i=0; i<n; i++)

    {
        #include<stdio.h>
#include<stdlib.h>
typedef struct
{
    char name[30];
    int id;
    double salary;
} Employee;

int main()
{
    int n,i;
    printf("Enter a size of employee : ");
    scanf("%d",&n);
    //array to store structure values of all employees
     Employee employees[n];
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
        {
        printf("Employee %d:- \n",i+1);

        printf("Name: ");
        scanf("%s",employees[i].name);

        printf("Id: ");
        scanf("%d",&employees[i].id);

        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        char ch = getchar();

        printf("\n");
    }

    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(i=0; i<n; i++)

    {
        printf("Name \t: ");
        printf("%s \n",employees[i].name);

        printf("Id \t: ");
        printf("%d \n",employees[i].id);

        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);

        printf("\n");
    }

    return 0;
}

    return 0;
}
