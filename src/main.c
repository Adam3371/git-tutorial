#include <stdio.h>
#include <stdlib.h>
#include "espl_lib.h"

int main(int argc, char *argv[])
{
	int inputNum = 1;
	printf("Pease enter a number: ");
	scanf("%d", &inputNum);
	char* numText = num_to_words(inputNum);
	printf("Der Text ist %s \n", numText);
	return 0;
}
