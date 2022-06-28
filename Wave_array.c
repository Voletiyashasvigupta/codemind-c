
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int flag=0;
    int d=arr[0]-arr[1];
    if (d<0)
    {
        for (i=0; i<a-1; i+=2)
        {
            if (arr[i+1]>arr[i]){
                flag=1;
                
            }
            else
            {
                flag=0;
                break;
                
            }
            
        }
        
    }
    else
    {
        for (i=0; i<a-1; i+=2)
        {
            if (arr[i+1]<arr[i])
            {
                flag=1;
                
            }
            else
            {
                flag=0;
                break;
                
            }
            
        }
        
    }
    if (flag==1)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
        
    }
    return 0;
    
}

