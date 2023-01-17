#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[50],b,c,d ;
    int x,y,z,flag=0;
    printf("please give the mail id from the user : ");
    gets(a);
    x=strlen(a);
    for(y=0;y<x;y++)
    {
        b=a[y];
        if(b=='@')
        {
            flag = 1 ;
        }
    }
   if(flag==1)
    {
        printf("\n valid email id : ");
    }
    else
    {
        printf("\n not valid email id : ");
    }
    return 0;
}
