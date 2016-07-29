#include <stdio.h>
#include <stdlib.h>

// Argc is argument counter, argv is argument vector
int main(int argc, char* argv[]) {
  // Notice that when compiling with gcc, it will throw an error
  // or warning because y is not used
  // Writing it out to a file using > will still print it to screen
  // while leaving the file empty, 
  int y;

  // Printing out all the things in argv
  for (int i =0; i < argc; ++i) {
    printf("%s\n", argv[i]);
  }

  // Toilsome to read in 100 integers from user input
  // easier, if we use file redirection
  int x;
  int i = 0;
  while (i < 100) {
    scanf("%d", &x);
    printf("%d\n", x);
    ++i;
  }

  return 0;
}
