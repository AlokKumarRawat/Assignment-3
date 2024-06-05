#include <stdio.h>
int main()
{
    char o;
    printf("Choose any one operation --- +,-,*,/\n");
    scanf("%c", &o);
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    switch (o)
    {
    case '+':
        printf("The sum of a and b is %d", a + b);
        break;
    case '-':
        printf("The difference of a and b is %d", a - b);
        break;
    case '*':
        printf("The product of a and b is %d", a * b);
        break;
    case '/':
        printf("The division of a and b is %d", a / b);
        break;
    default:
        printf("I am still learning");
        break;
    }
    return 0;
}
