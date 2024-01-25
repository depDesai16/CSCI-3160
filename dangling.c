#include <stdlib.h>

int main()
{
	int *data = malloc(100 * sizeof(int));

	/* on deallocation: call free() AND NULL the pointer */
	free(data);
	
	/* commenting this out to make it a dangling pointer and not a NULL pointer */
	/* data = '\0'; */

	/* dangling pointer access */
	data[5] = 5;

	return 0;
}
