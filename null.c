#include <stddef.h>

int main()
{
	int *ptr = NULL; /* or '\0' */
	int oops = *ptr;
	
	return 0;
}
