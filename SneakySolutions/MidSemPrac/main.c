#include <stdio.h>
#include <stdlib.h>
#include "List.h"

void fillList(List l, int v) {
  int t;
  for (int i = 0; i < v; ++i) {
    scanf("%d", &t);
    append(l, t);
  }
}

int main() {
  List myList1 = createList();
  List myList2 = createList();

  printf("Enter 5 values: ");
  fillList(myList1, 5);
  printf("Enter 5 values: ");
  fillList(myList2, 5);

  printList(myList1);
  printList(myList2);

  List checkList = merge(myList1, myList2);;

  printList(checkList);
}
