
# stack

## Description

**stack** is a simple library implementing a stack of pointers.

## Usage

Just add stack.c to your project file / Makefile and include stack.h where needed.

## Functions

### STACK *stackalloc(size_t capacity)

Create a new stack.

* _capacity_ - Initial stack capacity

Return: A new stack handle (to be freed with _stackfree_)

### int stacksetdtor(STACK *stack, int (*dtor)(void *))

Set an optional destructor function for elements.

* _stack_ - Stack handle
* _dtor_ - Destructor function

Return: 0 => Ok, -1 => Error

### STACK *stackrealloc(STACK *stack, size_t capacity)

Resize a stack.

* _stack_ - Stack handle
* _capacity_ - New size of stack

Return: The handle of the reallocated stack, or _NULL_ for error

### int stackfree(STACK *stack)

Release all allocations related to a stack.

* _stack_ - Stack handle or _NULL_

Return: 0 => OK, -1 => Error 

## int stackdestruct(STACK *stack)

Run destructor function on all elements and release all allocations related to a stack

* _stack_ - Stack handle

Return: 0 => OK, -1 => Error

### STACK *stackexpand(STACK *stack, size_t needed_capacity)

Make sure the capacity of the stack is at least _needed_capacity_.

* _stack_ - Stack handle
* _needed_capacity_ - Minimum capacity

Return: The handle of the possibly reallocated stack

### int stackpush(STACK *stack, void *data)

Add a new pointer to the stack.

* _stack_ - Stack handle
* _data_ - Pointer to be added

Return: 0 => OK, -1 => Error

### void *stacktop(STACK *stack)

Return the pointer on the top of the stack.

* _stack_ - Stack handle

Return: Pointer on top of stack, or _NULL_ if error

### void *stackback(STACK *stack, size_t back_index)

Return a pointer from the stack.

* _stack_ - Stack handle
* _back_index_ - Distance from top of stack

Return: Pointer _back_index_ elements from top of stack, or _NULL_ if error

### void *stackpop(STACK *stack)

Remove the pointer on the top of the stack.

* _stack_ - Stack handle

Return: Pointer on top of stack, or _NULL_ if error

### int stackpopdestruct(STACK *stack)

Remove element on top of the stack and, if destruct function exists, run it on the element

* _stack_ - Stack handle

Return: 0 => Ok, -1 => Error (Stack is already empty)

### size_t stacksize(STACK *size)

Return number of elements in stack

* _stack_ - Stack handle

Return: Number of element in stack










