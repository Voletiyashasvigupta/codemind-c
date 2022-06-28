#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int count = 0,i,c=0,a=0,b=0,d=0,e=0;
    scanf("%[^
]s", s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a')
        {
            a++;
            
        }
        if(s[i]=='e')
        {
            b++;
            
        }
        if(s[i]=='i')
        {
            c++;
            
        }
        if(s[i]=='o')
        {
            d++;
            
        }
        if(s[i]=='u')
        {
            e++;
            
        }
        
    }
    if(a>0&&b>0&&c>0&&d>0&&e>0)
    {
        printf("0");
        
    }
    if(a==0)
    {
        printf("a ");
        
    }
    if(b==0)
    {
        printf("e ");
        
    }
    if(c==0)
    {
        printf("i ");
        
    }
    if(d==0)
    {
        printf("o ");
        
    }
    if(e==0)
    {
        printf("u ");
        
    }
    
}