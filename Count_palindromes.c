#include<stdio.h>
int main()
{
    int n,i,arr[100],d,rev=0,t,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
        t=arr[i];
        while(arr[i])
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            rev=rev*10+d;
        }
        if(rev==t)
        {
            c++;
        }
    }
    printf("%d",c);
}
