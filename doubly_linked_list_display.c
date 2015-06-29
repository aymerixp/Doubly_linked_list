/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linked_list_display.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aratinau <aratinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/29 16:44:40 by aratinau          #+#    #+#             */
/*   Updated: 2015/06/29 16:48:52 by aratinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doubly_linked_list.h"

/*
 * Afficher uen liste
 */
void		dlist_display(t_dlist *p_list)
{
	if (p_list != NULL)
	{
		t_node *p_temp = p_list->head;
		while (p_temp != NULL)
		{
			ft_putnbr(p_temp->data);
			ft_putstr(" -> ");
			p_temp = p_temp->next;
		}
	}
	ft_putendl("NULL");
}

/*
 * Avoir la taille d'une liste chainee
 */
size_t		dlist_length(t_dlist *p_list)
{
	size_t ret;
	ret = 0;
	if (p_list != NULL)
	{
		ret = p_list->length;
	}
	return (ret);
}

/*
 * Inverser la liste
 */
t_dlist		*dlist_reverse(t_dlist *p_list)
{
	t_dlist *ret;
	ret = NULL;
	if (p_list != NULL)
	{
		t_node *p_temp = p_list->tail;
		ret = dlist_new();
		while (p_temp != NULL)
		{
			ret = dlist_append(ret, p_temp->data);
			p_temp = p_temp->prev;
		}
	}
	return (ret);
}
