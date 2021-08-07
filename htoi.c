#include <stdio.h>
#include <ctype.h>
#include <math.h>

//function to convert hexadecimal to decimal
int htoi(char *s)
{
    int i,j;
    int l = 0;
    int val = 0;
    int k = -1;
    int c = 0;
    for(i = 0; s[i] != '\0' ; i++)
    {
        s[i] = toupper(s[i]);
    } 
    if(s[0] == '0' && s[1] == 'X')
    {
        j=2;
    }
    for(i = 0; s[i] != '\0'; i++)
    {
        l++;
    }
    for(i = l-1; i >= j; i--)
    {
        if(s[i] >= 'A' && s[i] <= 'F')
        {
            val = s[i] - 'A' + 10;
            k++;
        }
        else
        {
            val =s[i] - '0';
            k++;
        }
        c += val*pow(16, k); 
    }
    return c;
}
int main()
{
    char str1[1000];
    scanf("%[^\n]%*c", str1);

    //calling function to convert hexadecimal to decimal
    printf("%d", htoi(str1));
    return 0;
}
