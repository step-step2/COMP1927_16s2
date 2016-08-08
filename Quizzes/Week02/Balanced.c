/**
 * The implementation of the methods in Balanced.h
 */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "Balanced.h"

// Given a string which can only contain characters of:
// {}, []. ()
// Determine whether it is a valid combination of brackets
// i.e. for string [}, return 0
//      for string (), return 1
// Make sure to assert that all characters in the string are indeed
// valid (use the validChar method)
// You cannot assume any particular size of the string,
// i.e. for all you know, it is infinite or empty =)

typedef struct node {
  char ch;
  struct node* next;
} *Node;

typedef struct stack {
  Node top;
} *Stack;

Stack newStack() {
  Stack s = malloc(sizeof(struct stack));
  s->top = NULL;
  return s;
}

Node newNode(char c) {
  Node s = malloc(sizeof(struct node));
  s->ch = c;
  s->next = NULL;
  return s;
}

void push(Stack s, char c) {
  Node n = newNode(c);
  n->next = s->top;
  s->top = n;
}

char pop(Stack s) {
  if (s->top == NULL) return '\0';
  char c = s->top->ch;

  Node d = s->top;
  s->top = s->top->next;
  free(d);

  return c;
}

int isValid(char* str) {

  Stack s = newStack();
  for (int i = 0; str[i] != '\0'; ++i) {
    switch (str[i]) {
      case '[': 
        push(s, '[');
        break;
      case ']':
        if (pop(s) != '[') return INVALID;
        break;
      case '{':
        push(s, '{');
        break;
      case '}':
        if (pop(s) != '{') return INVALID;
        break;
      case '(':
        push(s, '(');
        break;
      case ')':
        if (pop(s) != '(') return INVALID;
        break;
    }
  }

  return VALID;
  }

int validChar(char ch) {
  switch (ch) {
    case '[': case ']':
    case '{': case '}':
    case '(': case ')':
      return VALID;
    default:
      return INVALID;
  }
}
