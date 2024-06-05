#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int i = n;
    int a = n;
    int re = 0;
    while (n > 0)
    {
        re++;
        n /= 10;
    }
    int arm = 0;
    while (i > 0)
    {
        int temp = i % 10;
        arm = arm + pow(temp, re);
        i /= 10;
    }
    printf(arm == a ? "It is an armstrong number" : "It is not an armstrong number");
    return 0;
}
