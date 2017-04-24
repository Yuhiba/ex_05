#ifndef _MYLIST_H_
#define _MYLIST_H_

typedef struct s_list {
	void *data;
	struct s_list *next;
} t_list;

t_list *my_params_in_list(int, char **);
int my_list_size(t_list *);
int my_rev_list(t_list **);
int my_apply_on_list(t_list *, int (*f)(void *));
int my_apply_on_eq_in_list(t_list *, int (*f)(), void *, int (*cmp)());

#endif