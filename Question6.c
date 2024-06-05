#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int re = 0;
    while (n > 0)
    {
        int temp = n % 10;
        re = re * 10 + temp;
        n /= 10;
    }
    printf("The reverse of the number is %d", re);
    return 0;
}
