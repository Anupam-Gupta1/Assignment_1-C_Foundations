#include <stdio.h>
int main()
{
    int n,i;
    
    //getting the size of array
    scanf("%d", &n);
    int a[n];

    //input the value to array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp;

    //reversing the array
    for(i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }

    //printing array in reverse
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
