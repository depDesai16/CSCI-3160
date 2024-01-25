#include <stdlib.h>

int main()
{
	int *x = malloc(sizeof(int));
	free(x);
	return 0;
}
