
#include<stdio.h>

int main()
{
    int a[10];
    int *p,i;

    printf("enter 10 numbers\n");
    for(i=0;i<10;i++)
   { scanf("%d",&a[i]); }
    p=&a[0];

    for(i=9;i>=0;i--)
       {printf(" %d",p[i]);}

    return 0;
}
