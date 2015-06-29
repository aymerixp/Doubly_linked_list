/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linked_list_find.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aratinau <aratinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/29 16:49:30 by aratinau          #+#    #+#             */
/*   Updated: 2015/06/29 16:49:47 by aratinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doubly_linked_list.h"

/*
 * Rechercher un element selon sa valeur
 */
t_dlist		*dlist_find(t_dlist *p_list, int data)
{
	t_dlist *ret;
	ret = NULL;
	if (p_list != NULL)
	{
		t_node *p_temp = p_list->head;
		int found = 0;
		while (p_temp != NULL && !found)
		{
			if (p_temp->data == data)
			{
				ret = dlist_new();
				ret = dlist_append(ret, data);
				found = 1;
			}
			else
			{
				p_temp = p_temp->next;
			}
		}
	}
	return (ret);
}

/*
 * Recherche un ensemble d'elements selon une meme valeur
 */
t_dlist		*dlist_find_all(t_dlist *p_list, int data)
{
	t_dlist *ret;
	ret = NULL;
	if (p_list != NULL)
	{
		t_node *p_temp = p_list->head;
		while (p_temp != NULL)
		{
			if (p_temp->data == data)
			{
				if (ret == NULL)
				{
					ret = dlist_new();
				}
				ret = dlist_append(ret, data);
			}
			p_temp = p_temp->next;
		}
	}
	return (ret);
}
