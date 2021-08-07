#include <stdio.h>

//Function for multiplying matrices
void multiply(int a[][10], int b[][10], int n)
{
    int i,j,k;
    int c[n][n];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j]; 
            }
        }
    }

    //printing the product of array
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n,i,j;

    //getting the row and size of 2D array
    scanf("%d", &n);
    int a[10][10];
    int b[10][10];

    //input the value to 1st array
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
        scanf("%d", &a[i][j]);
        }
    }

    //input the value to 2nd array
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
        scanf("%d", &b[i][j]);
        }
    }
    
    //calling function to multiply both 2d arrays
    multiply(a, b, n);

    return 0;
}
