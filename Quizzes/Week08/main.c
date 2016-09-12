#include <stdio.h>
#include <stdlib.h>
#include "Q1.h"

void printMap(char** map, int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      printf("%c", map[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int n;
  char ch;
  scanf("%d", &n);

  // Evil hack
  scanf("%c", &ch);

  char** map = malloc(sizeof(char*) * n);
  for (int i = 0; i < n; ++i) {
    map[i] = malloc(sizeof(char) * n);
    for (int j = 0; j < n; ++j) {
      scanf("%c", &(map[i][j]));
    }
    // Evil hack
    scanf("%c", &ch);
  }

  flood(map, n, 1);
  printMap((char**)map, n);
  printf("-------------\n");

  flood(map, n, 1);
  printMap((char**)map, n);
  printf("-------------\n");

  flood(map, n, 2);
  printMap((char**)map, n);
  printf("-------------\n");

  flood(map, n, 1);
  printMap((char**)map, n);
  printf("-------------\n");
  

  for (int i = 0; i < n; ++i) {
    free(map[i]);
  }
  free(map);
  
  return 0;
}
