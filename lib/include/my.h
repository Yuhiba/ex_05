#ifndef MY_H_
#define MY_H_

	int get_color(char, char, char);
	int my_find_prime_sup(int);
	int my_getnbr(char *);
	int my_is_prime(int);
	void my_isneg(int);
	struct s_stock_par *my_param_to_tab(int, char **);
	int my_power_rec(int, int);
	int my_put_nbr(int);
	int my_putchar(char);
	int my_putnbr_base(int, char *);
	int my_putstr(char *);
	char *my_revstr(char *);
	int my_show_wordtab(char **);
	int my_showmem(char *, int);
	int my_showstr(char *);
	void my_sort_int_tab(int *, int);
	char **sort_params(int, char **);
	int my_sort_wordtab(char **);
	int my_square_root(int);
	int my_str_isalpha(char *);
	int my_str_islower(char *);
	int my_str_isnum(char *);
	int my_str_isprintable(char *);
	int my_str_isupper(char *);
	char **my_str_to_wordtab(char *);
	char *my_strcapitalize(char *);
	char *my_strcat(char *, char *);
	int my_strcmp(char *, char *);
	char *my_strcpy(char *, char *);
	char *my_strdup(char *);
	int my_strlen(char *);
	char *my_strlowcase(char *);
	char *my_strncat(char *, char *, int);
	int my_strncmp(char *, char *, int);
	char *my_strncpy(char *, char *, int);
	char *my_strndup(char *, int);
	char *my_strstr(char *, char *);
	char *my_strupcase(char *);
	int my_swap(int *, int *);
	char *sum_params(int, char **);

#endif
