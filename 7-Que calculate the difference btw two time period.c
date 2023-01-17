#include<stdio.h>
#include<conio.h>
struct Time
{
    int hour ;
    int min;
    int sec;
};
   int main()
{
    struct Time t1,t2,t3;

    printf("Enter hour min and second\n");
    scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);

    printf("Enter hour min and second\n");
    scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);

    // t1-t2
    if(t1.sec < t2.sec)
    {
        t1.min-- ;
        t1.sec = 60+t1.sec ;
    }
    t3.sec = t1.sec - t2.sec ;

    if(t1.min < t2.min)
    {
        t1.hour-- ;
        t1.min = t1.min + 60 ;
    }
    t3.min = t1.min - t2.min ;

    t3.hour = t1.hour - t2.hour ;

    printf("\nTime = %d:%d:%d\n",t3.hour,t3.min,t3.sec);
   return 0;
}