#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int p;
    printf("Enter the power of the number: ");
    scanf("%d", &p);
    int po = 1;
    for (int i = 0; i < p; i++)
    {
        po *= n;
    }
    printf("The value  is %ld", po);
    return 0;
}
