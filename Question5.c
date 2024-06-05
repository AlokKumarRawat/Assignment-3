#include <stdio.h>
int main()
{
    int n, t = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            t++;
            break;
        }
    }
    printf(t > 0 ? "It is not a prime number" : "It is a prime number");
    return 0;
}
