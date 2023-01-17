#include<stdio.h>
#include<conio.h>
int main()
{
    char str[5][100] ;
    int i,j,count=0;

    printf("Enter 5 names \n");
    for(i=0;i<5;i++)
        gets(str[i]);
    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j] != '\0';j++)
        {
            if(str[i][j] == 'a' || str[i][j] == 'A' || str[i][j] == 'e' || str[i][j] == 'E' || str[i][j] == 'i' || str[i][j] == 'I' || str[i][j] == 'o' || str[i][j] == 'O' || str[i][j] == 'u' || str[i][j] == 'U')
            count++ ;
        }
    }
    printf("number of  vowels = %d\n",count);
    return 0;
}
