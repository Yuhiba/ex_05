#include "my.h"

int my_str_isupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return 0;
		i += 1;
	}
	return 1;
}
