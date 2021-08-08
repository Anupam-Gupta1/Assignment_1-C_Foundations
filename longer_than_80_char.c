#include <stdio.h>
int main()
{
    char str[100], c;
    int i = 0;

    while((c = getchar()) != ';')
    {
        str[i++] = c;
        if(c == '\n')
        {
            i = 0;
        }
        if(i >= 80)
        {
            str[i] = '\0';
            printf("%s\n", str);
        }
    }
    printf("%d", i);
    return 0;
}
