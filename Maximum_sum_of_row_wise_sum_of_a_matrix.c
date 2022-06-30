#include<stdio.h>
int main()
{
    int n,m,i,j,a[100][100],sum,max;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
        if(max<sum)
        {
            max=sum;
        }
    }
    printf("%d",max);
}