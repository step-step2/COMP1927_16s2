#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
	int value;
	struct _Node *next;
} Node;

typedef Node *List;  // pointer to first Node

void print_sum(List l) {
  assert(l != NULL);
  List cur = l;
  int sum = 0;

  // Infinite loop, you do not need to define each condition
  for (;;) {

  }

  //   start    while         change            
  for (cur = l; cur != NULL; cur = cur->next) sum += cur->value;

  while (cur != NULL) {
    sum += cur->value;
    cur = cur->next;
  }

  printf("%d\n", sum);
}

int main() {

  List head = NULL;



  if () {
  } else if () 
  {
  }

  if () { } else if () { }

}

char *numToDay(int n)
{
	assert(0 <= n && n <= 6);
  char* day[] = { "Sun", "Mon"....};
  return day[n];

	char *day;
  switch (n) {
    case 0:
    case 1:
    default:
      assert(0);
      exit(EXIT_FAILURE);
  }
	if (n == 0) {
		day = "Sun";
	}
	else if (n == 1) {
		day = "Mon";
	}
	else if (n == 2) {
		day = "Tue";
	}
	else if (n == 3) {
		day = "Wed";
	}
	else if (n == 4) {
		day = "Thu";
	}
	else if (n == 5) {
		day = "Fri";
	}
	else if (n == 6) {
		day = "Sat";
	}
	return day;
}
