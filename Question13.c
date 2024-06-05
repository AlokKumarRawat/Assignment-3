#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of a: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
        else
            continue;
    }
    printf(sum == n ? "It is a perfect number" : "It is not a perfect number");
    return 0;
}
