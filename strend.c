#include <stdio.h>

//calculating the length of the string
int length(char* s)
{
    int l = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        l++;
    }
    return l;
}

//function to check if t occurs at the end of s
int strend(char* s, char*t)
{
    int i,j,k;
    int c = 0;

    //calling function to get the length of string
    int l1 = length(s) - 1;
    int l2 = length(t) - 1;
    
    while(l2 >= 0)
    {
        if(t[l2] == s[l1])
        {
            c = 1;
        }
        else
        {
            c = 0;
            break;
        }
        l2--;
        l1--;
    }
    return c;
}

int main()
{
    char s[100], t[100];
    int count;
    scanf("%s", s);
    scanf("%s", t);
    
    //getting value to check if t occurs at the end of s
    count = strend(s, t);
    printf("%d", count);
    return 0;
}
