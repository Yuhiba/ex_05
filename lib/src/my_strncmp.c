#include "my.h"
#include <stdio.h>
int my_strncmp(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0' || i < n)
	{
		if (s1[i] == s2[i])
			i += 1;
		else
			return -1;
	}
	return 0;
}
