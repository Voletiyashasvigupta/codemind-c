#include<stdio.h>
#include<string.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    char str[100];
    scanf("%s",str);
    for(int i;i<strlen(str);i++)
    {
        if(str[i]=='.')
        {
            c+=1;
        }
    }
    if(c>n/2)
    {
        printf("YES
");
        for(int i=0;i<n;i++)
        {
            if(str[i]=='.')
            {
                printf("B");
            }
            else
            {
                printf("%c",str[i]);
            }
        }
    }
    else
    {
        printf("NO");
    }
}


