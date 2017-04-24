#ifndef _MYLIST_H_
#define _MYLIST_H_

typedef struct s_list {
	void *data;
	struct s_list *next;
} t_list;

t_list *my_params_in_list(int, char **);
int my_list_size(t_list *);
int my_rev_list(t_list **);
int my_apply_on_list(t_list *, int (*f)(void*));
int my_apply_on_eq_in_list(t_list *, int (*f)(), void *, int (*cmp)());
void *my_find_elm_eq_in_list(t_list *, void *, int (*cmp)());
t_list *my_find_node_eq_in_list(t_list *, void *, int (*cmp)());
int my_rm_all_eq_from_list(t_list **, void *, int (*cmp)());
int my_add_list_to_list(t_list **, t_list *);
int my_sort_list(t_list **, int (*cmp)());
int my_put_elem_in_sort_list(t_list **, void *, int (*cmp)());
int my_add_sort_list_to_sort_list(t_list **, t_list *, int (*cmp)());

#endif