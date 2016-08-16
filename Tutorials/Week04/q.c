#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX 1024

struct x {
  int y;
};

void test1() {
  char buf[MAX];
  int  nC, nL = 0;

  while ((nC = read(0, buf, MAX)) > 0) {
    char *c;
    for (c = buf; c < buf+nC; c++) {
      if (*c == '\n') nL++;
    }
    write(1, buf, nC);
  }
  printf("%d\n",nL);
}

void test2() {
  char buf[MAX];
	int  nL = 0;
 
	while ((fgets(buf,MAX,stdin)) != NULL) {
		fputs(buf,stdout);
		nL++;
	}
	printf("%d\n",nL);
}

int main() {
  FILE* f = fopen("data", "r");
  fprintf(f, "a line\n");
  fclose(f);

  return 0;
}
