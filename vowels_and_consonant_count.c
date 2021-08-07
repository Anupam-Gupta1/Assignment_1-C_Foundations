#include <stdio.h>
int main()
{
    int i;
    char str[1000];

    //Variable to calculate vowels
    int vow = 0;

    //Variable to calculate consonants
    int cons = 0;

    //function to read line of string
    fgets(str, sizeof(str), stdin);
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U')
        {
            vow++;
        }
        else
        {
            cons++;
        }
    }

    printf("Vowels = %d, Consonants = %d", vow, cons);
    return 0;
}
