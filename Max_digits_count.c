#include<stdio.h>
int digit_count(int n)
{
    int dc=0,i,d;
        while(n!=0)
        {
            d=n%10;
            n=n/10;
            dc++;
        }
    return dc;
}
int main()
{
    int n,i,arr[100],max=0,dc=0,p,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        p=digit_count(arr[i]);
        if(max<p)
        {
            max=p;
        }
    }
    for(i=0;i<n;i++)
    {
        if(digit_count(arr[i])==max)
        {
            c++;
        }
    }
    printf("%d",c);
}
