#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    
    //function to get full string with spaces
    fgets(str, sizeof(str), stdin);
    int i;

    //to convert string to lower case
    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
    int l=0;
    int c=0;

    //to remiove spaces from string
    for(i = 0; str[i]!='\0'; i++)
    {
        if(str[i] != ' ')
        {
            str[l] = str[i];
            l++;
        }
    }
    str[l]='\0';
    int k = l-1;

    //to check if string is palindrome or not
    for(i = 0; i < l; i++)
    {
        if(str[i] == str[k])
        {
            c=1;
        }
        else
        {
            c=0; 
            break;
        }
        k--;
    }

    //printing the result if the string is palindrome or not
    if(c == 1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
    return 0;
}
