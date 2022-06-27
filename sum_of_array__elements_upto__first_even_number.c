#include<stdio.h>
int main()
{
    int i,n,sum=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            break;
        }
        else
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
    
}
