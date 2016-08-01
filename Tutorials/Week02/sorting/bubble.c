#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* getStdin(int n);
int* genRandom(int n);

void printArray(int* a, int n);
void printUsage();
void swap(int* a, int* b);

int main(int argc, char* argv[]) {
  int numVals = 0;
  char type = '\0';

  // Getting input
  if (!(argc == 3 && sscanf(argv[1], "%d", &numVals) == 1 && sscanf(argv[2], "%c", &type) == 1)) {
    printUsage();
    exit(EXIT_FAILURE);
  }
  int* values = type == 'R' ? genRandom(numVals) : getStdin(numVals);

  // Beginning bubbleing
  for (int i = 0; i < numVals; ++i) {
    for (int j = i + 1; j < numVals; ++j) {
      if (values[i] > values[j]) swap(&values[i], &values[j]);
    }
  }

  printArray(values, numVals);

  return EXIT_SUCCESS;
}

// Generating Values Methods
int* getStdin(int n) {
  int* values = malloc(sizeof(int) * n);

  for (int i = 0; i < n; ++i) {
    if (scanf("%d", &values[i]) != 1) {
      printUsage();
      free(values);
      exit(EXIT_FAILURE);
    }
  }

  return values;
}

int* genRandom(int n) {
  int* values = malloc(sizeof(int) * n);

  srand(time(NULL));
  for (int i = 0; i < n; ++i) {
    values[i] = rand() % 10000;
  }

  return values;
}

// Helper Functions
void printArray(int* a, int n) {
  for (int i = 0; i < n - 1; ++i) {
    printf("%d ", a[i]);
  }
  printf("%d\n", a[n-1]);
}

void printUsage() {
  fprintf(stderr, "I am disappointed\n./bubble #Values S|R (S for stdin, R for random)\n");
}

void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}
