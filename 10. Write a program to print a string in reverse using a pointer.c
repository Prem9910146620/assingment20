

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],*p;
    int i,d;

    printf("enter the characters\n");
    gets(a);
    d=strlen(a);
    p=&a[0];

    for(i=d-1;i>=0;i--)
       {printf(" %c",p[i]);}

    return 0;
}
