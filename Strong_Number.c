#include<stdio.h>
int main()
{
    int n,d,i,f,s=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        i=1;
        f=1;
        while(i<=d)
        {
            f=f*i;
            i++;
        }
        s+=f;
        n=n/10;
    }
    if(temp==s)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}