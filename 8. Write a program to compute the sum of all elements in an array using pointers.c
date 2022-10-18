#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5];
    int *p,i,sum=0;
    p=&a[0];
    printf("enter 5 numbers\n");
    for(i=0;i<5;i++)
   { scanf("%d",&a[i]); }


    for(i=0;i<5;i++)

    { sum=sum+p[i];


    }
    printf(" sum of elements is =%d",sum);
    return 0;
}
