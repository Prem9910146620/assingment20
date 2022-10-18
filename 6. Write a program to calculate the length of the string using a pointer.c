#include<string.h>
#include<stdio.h>
int main()
{
    char a[1000],*p;
    int i=0,c=0;
    p=&a[0];
    gets(a);
    for(i=0;p[i];i++)
        {

         c++;

         }
    printf("length of string is %d",c);


    return 0;
}
