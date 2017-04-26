int my_putstr(char *);

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		my_putstr(argv[i]);
		my_putstr("\n");
		i += 1;
	}
	return 0;
}