#include <stdio.h>
#include <stdlib.h>

struct x {
  int q, w;
};

void foo(void* x) {
  struct x* myP = (struct x*)((char*)x + 10);
  myP->w = ???;
}

int main(int argc, char* argv[]) {
  char x[8] = {0}; 
  x[3] = 1;
  x[4] = 2;
  struct x* w = (struct x*)x;

  printf("%d\n", w->q);
  printf("%d\n", w->w);

  return 0;
}
