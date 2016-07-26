#include <stdio.h>
#include <stdlib.h>

void scanf(void* str, int y) { // void* is some random pointer to *something*
  // Tell the compiler that str is a pointer to an array of characters
  // Then get the address of the y'th element, and say that is the beginning
  // of our new string secretMsg, should be just 'hi'
  char* secretMsg = &(char*)(str)[y];

}


// O(n)
int main(int argc, char* argv[]) {

  char* y[100] = { '0', '1', 'h', 'i', '\0', '.', '.' };

  for (int i = 0; i < 100; ++i) { // Goes through n times
    for (int j = 0; j < 100; ++j) { // Goes through n times
      printf("%c\n", i); // Will get execute n*n times, or n^2
    }
  }

  // Explaining void* things
  scanf(y, 2);

  char ch;
  while ((ch = getchar()) != EOF) { // reads from stdin
    printf("%c\n", ch);
  }
  return 0;
}
