int main()
{
    int i,k,h=0;
    int *p,*j;
    p=&i;
   j=&k;
    scanf("%d%d",&i,&k);


    h=*p>*j?*p:*j;
    printf("%d",h);
    return 0;

}
