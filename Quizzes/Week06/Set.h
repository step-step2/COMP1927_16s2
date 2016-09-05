#include <stdio.h>
#include <stdlib.h>

#define SET_SIZE 1000

typedef struct set* Set;
typedef int Item;

Set createSet();
void addItem(Set s, Item item);
void sortSet(Set s);
