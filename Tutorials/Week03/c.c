#include <stdio.h>
#include <stdlib.h>

struct x {
  int q, w;
};

int main(int argc, char* argv[]) {
  char x[8] = {0}; 
  x[3] = 1;
  struct x* w = (struct x*)x;

  w->q = 2;
  printf("%d\n", w->q);

  return 0;
}
