
#include<stdio.h>
int digit_count(int n)
{
    int i,dc=0,d;
    if(n==0)
    {
        return 1;
    }
    else
    {
        while(n!=0)
        {
            d=n%10;
            n=n/10;
            dc++;
        }
    }
    return dc;
}
int main()
{
    int n,m,i,arr[100],c=0,p,dc;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        p=digit_count(arr[i]);
        if(p==m)
        {
            c++;
        }
    }
    printf("%d",c);
}
