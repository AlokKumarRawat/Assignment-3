#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, r = 5678;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    if (a > b)
    {
        while (r != 0)
        {
            r = a % b;
            if (r == 0)
            {
                printf("The greatest common factor is %d", b);
                break;
            }
            else
            {
                a = b;
                b = r;
            }
        }
    }
    else
    {
        while (r != 0)
        {
            r = b % a;
            if (r == 0)
            {
                printf("The greatest common factor is %d", a);
                break;
            }
            else
            {
                b = a;
                a = r;
            }
        }
    }
    return 0;
}
