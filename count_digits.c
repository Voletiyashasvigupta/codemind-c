#include<stdio.h>
int digit_count(int n)
{
    int dc=0,i,d;
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
    int n,i,arr[100],p,dc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        p=digit_count(arr[i]);
        printf("%d ",p);
    }
}
