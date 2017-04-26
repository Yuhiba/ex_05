int my_putstr(char *);

int main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	while (i >= 0)
	{
		my_putstr(argv[i]);
		my_putstr("\n");
		i -= 1;
	}
	return 0;
}