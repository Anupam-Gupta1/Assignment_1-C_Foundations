#include <stdio.h>

//function to squeeze out characters of str2 from str1
void squeeze(char *s1, char *s2)
{
    int i,j;
    int c = 0;
    int l = 0;
    for(i = 0; s1[i] != '\0'; i++)
    {
        for(j = 0; s2[j] != '\0'; j++)
        {
            if(s1[i] != s2[j])
            {
              c++;  
            }
            else
            {
                c=0;
                break;
            }
        }
        if(c != 0)
        {
            s1[l] = s1[i];
            l++;
        }
    }
    s1[l]='\0';
}
int main()
{
    char str1[1000];
    char str2[1000];
    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%*c", str2);

    //calling function for squeezing out char of str2 from str1
    squeeze(str1, str2);

    //printing str1 after squeezing out character of str2 from str1
    printf("%s", str1);
    return 0;
}
