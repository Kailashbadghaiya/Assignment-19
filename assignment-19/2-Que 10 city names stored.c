#include<stdio.h>
#include<string.h>
int main()
{

    char str[10][20]={"mumbai","goa","kanpur","bhopal","delhi","nagpur","jabalpur","thane","bhandup","kurla"};
    int temp,i,j,p ;

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            p = strcmp(str[i],str[j]);
            if(p==-1 || p==0)
                continue ;
            else
            {
                temp = str[i][j];
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}
