#include <stdio.h>
int main()
{
    int i, j, a, n, number[100],c;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    scanf("%d", &number[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] < number[j])
            {
                c++;
                
            }
            
        }
        
    }
    if(c==0)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
        
    }
    
}
