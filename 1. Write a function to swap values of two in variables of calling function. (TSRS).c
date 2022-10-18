#include<stdio.h>
#include<string.h>
int swap();
int main()
{ int a,b;
printf("enter two values a and b:\n");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf(" a=%d,b=%d",a,b);
return 0;


}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

