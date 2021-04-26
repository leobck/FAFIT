#include <stdio.h>

int main(){
  int a = 5;
  int b = 12;
  int *p;
  int *q;
  p = &a;
  q = &b;
  int c = *p + *q;
  printf("c = %d\n", c);
  return 0;
}
