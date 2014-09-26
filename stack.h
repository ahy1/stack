
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdlib.h>

typedef struct {
	void **addr;
	size_t ix;
	size_t capacity;
	int (*dtor)(void *);
} STACK;

STACK *stackalloc(size_t capacity);
int stacksetdtor(STACK *stack, int (*dtor)(void *));
STACK *stackrealloc(STACK *stack, size_t capacity);
int stackfree(STACK *stack);
int stackdestruct(STACK *stack);
int stackpush(STACK *stack, void *data);
void *stacktop(STACK *stack);
void *stackback(STACK *stack, size_t back_index);
void *stackpop(STACK *stack);
int stackpopdestruct(STACK *stack);
size_t stacksize(STACK *stack);

#endif

