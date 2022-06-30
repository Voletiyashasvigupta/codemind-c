#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
  int v=strlen(str),i;
    for (i=0;i<v;i++)
    {
        if(str[i]=='.')
        {
            printf("[.]");
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}
