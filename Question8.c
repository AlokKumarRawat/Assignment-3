#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a = 0, b = 1;
    printf("%d , %d ", a, b);
    int i = 2;
    while (i < n)
    {
        int c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
        i++;
    }
    return 0;
}
