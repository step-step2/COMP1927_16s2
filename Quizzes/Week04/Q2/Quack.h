/**
 * Quacks.h file
 * Create any typedefs/#defines/data structures you want in here
 * Make sure they are an ADT!
 */

// This line might be useful
#include "Stack.h" 

// You implement everything below in the Quack.c file =)
typedef struct quack* Quack;

Quack createQuack();
int sizeQ(Quack q);
void pushQ(Quack q, int v);
int popQ(Quack q);
