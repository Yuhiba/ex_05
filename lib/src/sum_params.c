#include <stdlib.h>

#include "my.h"

int string_len(int argc, char *argv[])
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (i < argc)
	{
		len += my_strlen(argv[i]);
		i += 1;
	}
	return len + argc;
}

char *sum_params(int argc, char *argv[])
{
	char *str;
	int i;

	i = 0;
	str = NULL;
	if ((str = malloc((string_len(argc, argv) * sizeof(*str)))))
	{
		str[0] = '\0';
		while (i < argc)
		{
			my_strcat(str, argv[i]);
			if (i < argc - 1)
				my_strcat(str, "\n");
			i += 1;
		}
	}
	return str;
}
