



#include<stdio.h>
int main()
{ 
    char str[100];
    scanf("%[^/n]s",str);
    int i,c=0,sum=0;
    for(i=0;str[i]!=0;i++)
    {
        c++;
        }
        for(i=0;i<c;i++)
        {
            if(str[i]=='o'||str[i]=='i'||str[i]=='e'||str[i]=='a'||str[i]=='A'||str[i]=='O'||str[i]=='U')
            {
                sum++;
                } 
            
        }
        printf("%d",sum); 
    
}