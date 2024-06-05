#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of a: ");
    scanf("%d", &n);
    int odd_sum = 0;
    int even_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            even_sum += i;
        else
            odd_sum += i;
    }
    printf("The sum of odd number and even number between 1 and %d is %d , %d", n, odd_sum, even_sum);
    return 0;
}
