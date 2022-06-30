#include<stdio.h>
#include<string.h>
int val(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}
int rtoD(char str[])
{
    int res=0;
    for (int i = 0; i < strlen(str); i++)
    {
        int s1 = val(str[i]);
        if (i + 1 < strlen(str))
        {
            int s2 = val(str[i + 1]);
            if (s1 >= s2)
            {
                res = res + s1;
            }
            else
            {
                res = res + s2 - s1;
                i++;
               
            }
        }
        else {
            res = res + s1;
        }
    }
    return res;
}
int main()
{
    char str[100];
    int x;
    fgets(str,sizeof(str),stdin);
    x=rtoD(str);
    printf("%d",x);
}
