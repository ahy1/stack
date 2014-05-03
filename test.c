

#include "stack.h"

#include <stdio.h>
#include <string.h>

int printit(const char *str)
{
	printf("[%s]\n", str);
	return 0;
}

int main()
{
	STACK *stack;

	stack=stackalloc(2);

	stackpush(stack, "Test1");
	stackpush(stack, "Test2");
	stackpush(stack, "Test3");

	if (!strcmp(stacktop(stack), "Test3")) puts("OK");
	else puts("ERROR");

	stackpop(stack);

	if (!strcmp(stackpop(stack), "Test2")) puts("OK");
	else puts("ERROR");

	if (!strcmp(stacktop(stack), "Test1")) puts("OK");
	else puts("ERROR");

	stackpop(stack);

	if (stacktop(stack)==NULL) puts("OK");
	else puts("ERROR");


	if (stackpop(stack)==NULL) puts("OK");
	else puts("ERROR");


	return 0;
}


