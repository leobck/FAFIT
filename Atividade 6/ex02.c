#include <stdio.h>

int main(){
  int i = 99;
  int j;
  int *p;
  p = &i;
  j = *p + 100;
  printf("%d\n", j);
  return 0;
}
