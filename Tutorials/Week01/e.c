#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int value;
	struct Node *next;
} * Node;

// Recursive sum in one line
int llSum(Node x) {
  // This can be expanded to
  /*
   * if (x == NULL) {
   *   return 0;
   * } else {
   *   return llSum(x->next) + x->value;
   * }
   */
  return x == NULL ? 0 : llSum(x->next) + x->value;
}

// Iterative sum
int llSum(Node* x) {
  int sum = 0;
  for (Node y = x; x != NULL; x = x->next) {
    sum += x->value;
  }

  // One Liner
  // for (Node y = x; x != NULL; sum += x->value, x = x->next);
  // return sum
  
  return sum;
}

int main() {
  char* x = "hihi";

  // This DOES NOT WORK
  // C doesn't know how to do "hihi" == "something else"
  // Rule of thumb is to just use characters or numbers for switch case
  switch (x) {
    case SUN:
      printf("meamfdsas");
      break;
    case MON:
      printf("meamfdsas");
      break;
    case SUN:
      printf("meamfdsas");
      break;
    default:
      printf("hihi");
  }

  // Infinite look
  for (;;) {}

  // Quick for loop to iterate to the 2nd last element
  Node ele = L->head;
  for (Node ele = L->head; ele->next != NULL; ele = ele->next);

  return 0;
}

