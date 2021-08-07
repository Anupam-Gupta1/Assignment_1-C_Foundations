#include <stdio.h>

//function to reverse string
void reverse(char *s)
{
    int l=0;
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        l++;
    }
    for(i = 0; i < l/2; i++)
    {
        char temp = s[i];
        s[i] = s[l-i-1];
        s[l-i-1] = temp;
    }
}

int main()
{
    char str[100];

    //function to input string
    fgets(str, sizeof(str), stdin);

    //calling function to reverse the string
    reverse(str);

    //printing the reversed string
    printf("%s", str);
    return 0;
}
