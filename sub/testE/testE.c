#include <stdio.h>

#include "testE.h"
#include "testE2.h"

void PrintHelloWorldSubDir(void)
{
	fprintf(stderr, "HELLO WORLD FROM A SUBDIR!\n");
	PrintHelloFile2();
}
