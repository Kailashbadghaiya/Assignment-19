#include <stdio.h>
struct employee
 {
   char name[50];
   int age;
   int id ;
};
void display(struct employee e);

int main()
{
   struct employee e;

   printf("Enter name: ");

   fgets(e.name,50,stdin);

   printf("Enter ID : ");
   scanf("%d",&e.id);

   printf("Enter age: ");
   scanf("%d", &e.age);

   display(e);

   return 0;
}
void display(struct employee e)
 {
   printf("\nDisplaying information\n");
   printf("Name: %s", e.name);
   printf("ID : %d\n",e.id);
     printf("Age: %d", e.age);
}
