/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linked_list.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aratinau <aratinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/29 14:38:23 by aratinau          #+#    #+#             */
/*   Updated: 2015/06/29 15:55:24 by aratinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLY_LINKED_LIST_H
# define DOUBLY_LINKED_LIST_H

# include "../libraire/libft.h" /* ## */

typedef struct		s_node
{
	int				data;
//	void			*content;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct		s_dlist
{
	size_t			length;
	struct s_node	*tail;
	struct s_node	*head;
}					t_dlist;

typedef struct		s_env
{
	int				a;
}					t_env;

t_dlist				*dlist_new(void);
t_dlist				*dlist_append(t_dlist *p_list, int data);
t_dlist				*dlist_prepend(t_dlist *p_list, int data);
t_dlist				*dlist_insert(t_dlist *p_list, int data, int position);
void				dlist_delete(t_dlist **p_list);
void				dlist_display(t_dlist *p_list);
t_dlist				*dlist_remove(t_dlist *p_list, int data);
t_dlist				*dlist_remove_all(t_dlist *p_list, int data);
t_dlist				*dlist_remove_id(t_dlist *p_list, int position);
size_t				dlist_length(t_dlist *p_list);
t_dlist				*dlist_find(t_dlist *p_list, int data);
t_dlist				*dlist_find_all(t_dlist *p_list, int data);
t_dlist				*dlist_reverse(t_dlist *p_list);

#endif
