
#include<stdio.h>
int main()
{
    int n,i,c,j,d=0,k;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    scanf("
%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        if(a[i]!=1 && a[i]!=0)
        {
            for(j=2;j*j<=a[i];j++)
            {
                if(a[i]%j==0)
                {
                    c=1;
                    
                }
                
            }
            if(c==0&&a[i]<=k)
            {
                d++;
                
            }
            
        }
        
    }
    printf("%d",d);
    
}

