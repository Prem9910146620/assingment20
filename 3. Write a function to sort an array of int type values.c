
#include<stdio.h>
void lml();
int main()
{
    int a[]={10,20,45,36,15,24,35,16,48,29},i;
     lml(a,10);
   return 0;
}
void lml(int *a,int b)
{
   int i,j,k,t;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[i]<a[j])
            { t=a[i];
            a[i]=a[j];
            a[j]=t; }

        }
    }
    for(i=0;i<10;i++)
        { printf("%d\n",a[i]); }

}
