#include <stdio.h>

//function to call the rightmost index for the occurence of str2 in str1
int strrindex(char* s, char*t)
{
    int i,j,k;
    int c = -1;
    int l = 0;
    for(i = 0; s[i] != '\0'; i++)
    {
        k = i;
        l = 0;
        j = 0;
        while(t[j] != '\0')
        {
            if(s[k] == t[j])
            {
                l++;
            }
            else
            {
                l = 0;
                break;
            }
            j++;
            k++;
        }
        if(l > 0)
        {
            c = i;
        }
    }

    //returning inex value if str2 is in str1
    return c;
}

int main()
{
    char s[100], t[100];
    int count;
    scanf("%s", s);
    scanf("%s", t);

    //calling function to get the rightmost index for the occurence of str2 in str1
    count = strrindex(s, t);

    //printing the index
    printf("%d", count);
    return 0;
}
