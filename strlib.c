#include <stdio.h>

//function to take input
void input(char* s, char* t, int *n)
{
    scanf("%s" ,s);
    scanf("%s" ,t);
    scanf("%d", n);
}

// function to copy characters of t till n to s
void strncpy(char*s, char* t, size_t n)
{
    for(int i = 0; i < n; i++)
    {
        s[i] = t[i];
    }
    s[n] = '\0';
}

//function to concat characters of t upto n to s
void strncat(char* s, char* t, size_t n)
{
    int l = 0;
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        l++;
    }
    for(i = 0; i < n; i++)
    {
        s[l] = t[i];
        l++;
    }
    s[l]='\0';
}

//function to compare both strings upto n
int strncmp(char* s, char* t, size_t n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(s[i] < t[i])
        {
            return -1;
        }
        if(s[i] > t[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char s[100], t[100];
    int n;
    int c;

    //calling function for input
    input(s, t, &n);

    //calling function to copy t to s
    strncpy(s, t, n);
    printf("%s", s);

    input(s, t, &n);

    //calling function to concat t to s
    strncat(s, t, n);
    printf("%s", s);

    input(s, t, &n);

    //calling function to compare s and t
    c = strncmp(s, t, n);
    printf("%d", c);
    return 0;
}
