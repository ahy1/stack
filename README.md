
# stack

## Description

**stack** is a simple library implmenting a stack of pointers.

## Usage

Just add stack.c to your project file / Makefile and include stack.h where needed.

## Functions

### STACK *stackalloc(size_t capacity)

Create a new stack.

* _capacity_ - Initial stack capacity

Return: A new stack handle (to be freed with _stackfree_)

### STACK *stackrealloc(STACK *stack, size_t capacity)

Resize a stack.

* _stack_ - Stack handle
* _capacity_ - New size of stack

Return: The handle of the reallocated stack, or _NULL_ for error

### int stackfree(STACK *stack)

Release all allocations related to a stack.

* _stack_ - Stack handle or _NULL_

Return: 0 => OK, -1 => Error 

### STACK *stackexpand(STACK *stack, size_t needed_capacity)

Make sure the capacity of the stack is at least _needed_capacity_.

* _stack_ - Stack handle
* _needed_capacity_ - Minimum capacity

Return: The handle of the possibly reallocated stack

### int stackpush(STACK *stack, void *data)

Add a new pointer to the stack.

* _stack_ - Stack handle
* _data_ - Character to be appended

Return: 0 => OK, -1 => Error

### STACK *stacktop(STACK *stack)

Return the pointer on the top of the stack.

* _stack_ - Stack handle

Return: Pointer on top of stack, or _NULL_ if error

### STACK *stackpop(STACK *stack)

Remove the pointer on the top of the stack.

* _stack_ - Stack handle

Return: Pointer on top of stack, or _NULL_ if error










