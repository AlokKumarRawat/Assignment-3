#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        int temp = n % 10;
        sum += temp;
        n /= 10;
    }
    printf("The sum of the digit of the number is %d", sum);
    return 0;
}
