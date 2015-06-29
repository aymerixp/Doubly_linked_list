/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linked_list_remove.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aratinau <aratinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/29 16:47:31 by aratinau          #+#    #+#             */
/*   Updated: 2015/06/29 16:47:39 by aratinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doubly_linked_list.h"

/*
 * Liberer une liste
 */
void		dlist_delete(t_dlist **p_list)
{
	if (*p_list != NULL)
	{
		t_node *p_temp = (*p_list)->head;
		while (p_temp != NULL)
		{
			t_node *p_del = p_temp;
			p_temp = p_temp->next;
			free(p_del);
		}
		free (*p_list), *p_list = NULL;
	}
}

/*
 * Supprimer un element selon sa valeur
 */
t_dlist		*dlist_remove(t_dlist *p_list, int data)
{
	if (p_list != NULL)
	{
		t_node *p_temp = p_list->head;
		int found = 0;
		while (p_temp != NULL && !found)
		{
			if (p_temp->data == data)
			{
				if (p_temp->next == NULL)
				{
					p_list->tail = p_temp->prev;
					p_list->tail->next = NULL;
				}
				else if (p_temp->prev == NULL)
				{
					p_list->head = p_temp->next;
					p_list->head->prev = NULL;
				}
				else
				{
					p_temp->next->prev = p_temp->prev;
					p_temp->prev->next = p_temp->next;
				}
				free(p_temp);
				p_list->length--;
				found = 1;
			}
			else
			{
				p_temp = p_temp->next;
			}
		}
	}
	return (p_list);
}

/*
 * Supprimer un ensemble d'elements suivant une meme valeur
 */
t_dlist		*dlist_remove_all(t_dlist *p_list, int data)
{
	if (p_list != NULL)
	{
		t_node *p_temp = p_list->head;
		while (p_temp != NULL)
		{
			if (p_temp->data == data)
			{
				if (p_temp->next == NULL)
				{
					p_list->tail = p_temp->prev;
					p_list->tail->next = NULL;
				}
				else if (p_temp->prev == NULL)
				{
					p_list->head = p_temp->next;
					p_list->head->prev = NULL;
				}
				else
				{
					p_temp->next->prev = p_temp->prev;
					p_temp->prev->next = p_temp->next;
				}
				free(p_temp);
				p_list->length--;
			}
			else
			{
				p_temp = p_temp->next;
			}
		}
	}
	return (p_list);
}

/*
 * Supprimer un element selon sa position
 */
t_dlist		*dlist_remove_id(t_dlist *p_list, int position)
{
	if (p_list != NULL)
	{
		t_node *p_temp = p_list->head;
		int i;
		i = 1;
		while (p_temp != NULL && i <= position)
		{
			if (position == i)
			{
				if (p_temp->next == NULL)
				{
					p_list->tail = p_temp->prev;
					p_list->tail->next = NULL;
				}
				else if (p_temp->prev == NULL)
				{
					p_list->head = p_temp->next;
					p_list->head->prev = NULL;
				}
				else
				{
					p_temp->next->prev = p_temp->prev;
					p_temp->prev->next = p_temp->next;
				}
				free(p_temp);
				p_list->length--;
			}
			else
			{
				p_temp = p_temp->next;
			}
			i++;
		}
	}
	return (p_list);
}

