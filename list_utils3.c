/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:39:31 by emartin2          #+#    #+#             */
/*   Updated: 2023/12/08 18:42:20 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	find_number_b(t_stack *b, int find)
{
	int		i;
	t_nodo	*aux;

	aux = b->head;
	i = 0;
	while (++i <= b->len)
	{
		if (aux->orden == find)
			return (i);
		else
			aux = aux->next;
	}
	return (0);
}

void	free_t_stack(t_stack *a)
{
	t_nodo	*aux1;
	t_nodo	*aux2;

	aux1 = a->head;
	while (a->len > 1)
	{
		aux2 = aux1->next;
		free (aux1);
		aux1 = aux2;
		a->len = a->len -1;
	}
}
