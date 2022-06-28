#include<stdio.h>
int main()
{
    int n,i,arr[100],t,sum=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        t=arr[i];
        while(arr[i])
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            sum+=d;
        }
    }
    printf("%d",sum);
}

