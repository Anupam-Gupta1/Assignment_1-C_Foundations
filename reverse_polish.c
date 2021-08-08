#include <stdio.h>
#include <ctype.h>

//implementing stack
int stack[100];
int top = -1;

//pushing value into stack
void push(int n)
{
    stack[++top] = n;
}

//popping value from stack
int pop()
{
    return stack[top--];
}

int main()
{
    char str[100];
    int i = 0;
    scanf("%s", str);

    //doing the whole operation of reverse polish expression
    while(str[i] != '\0')
    {
        if(isdigit(str[i]))
        {
            int n = str[i] - 48;
            push(n);
        }
        else
        {
            int n1 = pop();
            int n2 = pop();
            int n3;
            switch(str[i])
            {
                case '+':
                {
                    n3 = n1 + n2;
                    break;
                }
                case '-':
                {
                    n3 = n1 - n2;
                    break;
                }
                case '*':
                {
                    n3 = n1 * n2;
                    break;
                }
                case '/':
                {
                    n3 = n1 / n2;
                    break;
                }
            }
            push(n3);
        }
        i++;
    }
    
    printf("%d", pop());
    return 0;
}
