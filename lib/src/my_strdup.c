#include <stdlib.h>

#include "my.h"

char *my_strdup(char *src)
{
	char *dest;

	dest = NULL;
	if ((dest = malloc((my_strlen(src) + 1) * sizeof(*dest))))
		my_strcpy(dest, src);
	return dest;
}
