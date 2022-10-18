
#include<string.h>
#include<stdio.h>
int main()
{
    char m[1000],*p,a,e,i,o,u;
    int j=0,c=0,n=0;
    p=&m[0];
    gets(m);
    for(j=0;p[j];j++)
        { if(p[j]=='a'||p[j]=='e'||p[j]=='i'||p[j]=='o'||p[j]=='u')
            {c++;}
           n++;
         }

    printf("length of vowels is %d\n",c);
   printf("length of constants is %d",n-c);


    return 0;
}
