
#include<stdio.h>
#include<string.h>
int swap();
int main()
{ char a[20];
  char b[20];
  printf("enter two characters:\n");
  fgets(a,20,stdin);
  fgets(b,20,stdin);

  swap(&a,&b);
 printf("%s%s",a,b);
 return 0;

}
int swap(char **a,char **b)
{   char *t;

    t=*a;
    *a=*b;
    *b=t;

}

