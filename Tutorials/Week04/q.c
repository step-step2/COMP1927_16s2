#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct alloc {
  int magic;
  int size;
  int next;
}* Alloc;

typedef struct free {
  int magic;
  int size;
}* Free;

int main() {
  char memory[100] = {0};
  Free free_list = (Free)memory;
  free_list->magic = 0xDEADBEEF;
  free_list->size = 100;

  Alloc first_alloc = (Alloc)memory;
  first_alloc->magic = 0xBEEFDEAD;

  return 0;
}




