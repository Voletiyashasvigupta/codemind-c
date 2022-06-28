
#include<stdio.h>
int digit_count(int n)
{
    int i,d,dc=0;
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
    int n,i,arr[100],p,max=0,dc=0;
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
        dc=0;
        p=digit_count(arr[i]);
        if((digit_count(arr[i]))==max)
        {
            printf("%d ",arr[i]);
        }
    }
}

