#include "my.h"

int my_sort_wordtab(char **tab)
{
	int size;
	int unsorted;
	int j;
	char *tmp;

	unsorted = 1;
	size = my_strlen(*tab);
	while (unsorted)
	{
		unsorted = 0;
		j = 0;
		while (j < size - 1)
		{
			if (my_strcmp(tab[j] , tab[j + 1]) > 0)
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
				unsorted = 1;
			}
			j += 1;
		}
	}
	return 0;
}
