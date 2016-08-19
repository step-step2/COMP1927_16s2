#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
adsf

#define MAX 1024

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
  int f = open("data", O_RDONLY);
  FILE* r = fopen("data", "rw");

  printf("%d\n", f);

  (void)f;

  fclose(r);
  close(f);

  return 0;
}
