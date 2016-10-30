#include <stdio.h>
#include <stdlib.h>

union myThing {
	unsigned long long ikey;
	char               skey[8];
};

int main() {
  unsigned long long x = 0b0000000000110100001100101011011000110110001101111001011100010111;
  union myThing* y = (union myThing*)(&x);
  printf("%llu\n", y->ikey);
  printf("%s\n", y->skey);

  return 0;
}
