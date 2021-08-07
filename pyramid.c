#include <stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d", &n);
    
    //loop for number of rows of pyramid
    for(i = 1; i <= n; i++)
    {
	//loop to input spaces before #
        for(j = 1; j <= n-i; j++)
        {
            printf(" ");
        }

	//loop to input # till i
        for(k = 0; k < i; k++)
        {
            printf("# ");
        }

	//to move to next row
        printf("\n");
    }

    return 0;
}
