/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:12:43 by emartin2          #+#    #+#             */
/*   Updated: 2023/12/06 15:13:21 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	pb(t_stack *a, t_stack *b)
{
	t_nodo	*aux1;
	t_nodo	*aux2;

	if (a->len)
	{
		aux1 = a->head;
		a->head = a->head->next;
		a->len = a->len -1;
		b->len = b->len +1;
		if (b->head == NULL)
		{
			b->head = aux1;
			b->head->next = NULL;
		}
		else
		{
			aux2 = b->head;
			b->head = aux1;
			b->head->next = aux2;
		}
		write (1, "pb\n", 3);
	}
}

void	pa(t_stack *a, t_stack *b)
{
	t_nodo	*aux1;
	t_nodo	*aux2;

	if (b->len)
	{
		aux1 = b->head;
		b->head = b->head->next;
		b->len = b->len -1;
		a->len = a->len +1;
		if (a->head == NULL)
		{
			a->head = aux1;
			a->head->next = NULL;
		}
		else
		{
			aux2 = a->head;
			a->head = aux1;
			a->head->next = aux2;
		}
		write (1, "pa\n", 3);
	}
}
