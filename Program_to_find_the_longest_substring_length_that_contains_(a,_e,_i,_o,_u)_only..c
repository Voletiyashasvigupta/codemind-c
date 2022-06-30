#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
   int v=strlen(str),i,c=0,max=0;
    for(i=0;i<v;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            c++;
        }
        else
        {
            if(c>max)
            {
                max=c;
                c=0;
            }
        }
    }
    printf("%d",max);
}

