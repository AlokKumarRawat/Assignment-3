#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int re=0;
    while(n>0){
        re++;
        n/=10;
    }
    printf("The number of digit in the given number is %d",re);
    return 0;
}
