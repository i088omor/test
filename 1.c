#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0  ){  /*"==0"が"(n&1)"ではなく、"1"のみにかかっていたため*/
    printf("%d は偶数です\n", n);
  }
  return 0;
}
