/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aratinau <aratinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/29 14:41:11 by aratinau          #+#    #+#             */
/*   Updated: 2015/06/29 15:51:15 by aratinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doubly_linked_list.h"

int		main(int ac, char **av)
{
	int i;
	i = 1;
	t_dlist *dlist_a;

	dlist_a = dlist_new();
	if (ac == 1)
	{
		ft_putendl("ERROR");
		return (0);
	}

	while (i < ac)
		dlist_a = dlist_prepend(dlist_a, ft_atoi(av[i++]));

	dlist_display(dlist_a);

	return (0);
}
