#include <stdio.h>

void misterio(int *p, int *q){
  *p = *q;
  printf("%d\n",);
}

int main(){
  int i = 6;
  int j = 10;
  misterio(&i, &j);
  return 0;
}
