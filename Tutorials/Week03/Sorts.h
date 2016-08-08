#include <stdio.h>
#include <stdlib.h>

/* All the sorts! */
void insertion(int* a, int n);
void selection(int* a, int n);
void bubble(int* a, int n);
void merge(int* a, int n);
void quick(int* a, int n);
void shell(int* a, int n);

/* Helper functions */
void swap(int* a, int * b);
void shuffle(int* arr, int lo, int hi);
