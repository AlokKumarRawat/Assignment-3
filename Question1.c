#include <stdio.h>
int main(){
  int n,sum=0;
  printf("Enter the number: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    sum+=i;
  }
  printf("The sum of natural number till %d is %d",n,sum);
  return 0;
}
