#include <stdio.h>

#include "testB.h"
#include "testC.h"

int main(int argc, char** argv)
{
	(void)argc;
	(void)argv;
	PrintHelloWorldDynamic();
	PrintHelloWorldArchive();
	PrintHelloWorldSubDir();
	fprintf(stderr, "HELLO WORLD!\n");
	return 0;
}
