#include <stdio.h>

//function to check the 1st ocuurence of any character of str2 in str1
int any(char *s1, char *s2)
{
    int i,j;
    int c = -1;
    for(i = 0; s1[i] != '\0'; i++)
    {
        for(j = 0; s2[j] != '\0'; j++)
        {
            if(s1[i] == s2[j])
            {
              c = i;
            }
        }
    }
    return c;
}
int main()
{
    char str1[1000];
    char str2[1000];
    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%*c", str2);

    //calling function to check the 1st ocuurence of any character of str2 in str1 and printing the return value
    printf("%d", any(str1, str2));
    return 0;
}
