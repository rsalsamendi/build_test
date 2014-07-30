#include <stdio.h>

#include "testB.h"
#include "testD.h"

void PrintHelloWorldDynamic(void)
{
	fprintf(stderr, "Hello World Dynamic!\n");
	PrintNestedDependency();
}
