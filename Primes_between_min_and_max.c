
#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<=1)
    {
        return 0;
        
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
            
        }
        
    }
    return 1;
    
}
int main()
{
    int n,arr[100],max=0,min=0,imin=0,imax=0,z=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            imax=i;
            
        }
        
    }min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            imin=i;
            
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(i>=imin && i<=imax||i<=imin && i>=imax)
        {
            if(prime(arr[i])==1)
            {
                z+=1;
                
            }
            
        }
        
    }
    printf("%d",z);
    
}
        