
#include <stdio.h>

int main()
{
     int n, sum = 0;
 
    printf("Enter an integer number \n");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf ("Sum of first %d natural numbers = %d\n", n, sum);
	
}
