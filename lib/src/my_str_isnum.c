#include "my.h"

int my_str_isnum(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return 0;
		i += 1;
	}
	return 1;
}
