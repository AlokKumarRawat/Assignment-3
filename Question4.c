#include <stdio.h>
int main()
{
    int n, fact = 1, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    i = n;
    while (i > 0)
    {
        fact *= i;
        i--;
    }
    printf("The factorial of %d is %ld", n, fact);
    return 0;
}
