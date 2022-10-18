#include<stdio.h>
int main()
{
    int i=10,*p,**h,***k;
    p=&i;
    h=&p;
    k=&h;
    printf("%d %d %d %d\n",i,*p,**h,***k);
    printf("%d %d %d %d\n",&i,p,*h,**k);
    printf("%d %d %d\n",&p,h,*k);
    printf("%d %d\n",&h,k);
    printf("%d",&k);

    return 0;

}
