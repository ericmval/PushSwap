/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:13:50 by emartin2          #+#    #+#             */
/*   Updated: 2023/12/06 15:19:38 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

static void	rra_in(t_stack *a);
static void	rrb_in(t_stack *b);

void	rra(t_stack *a)
{
	t_nodo	*aux1;

	if (a->len > 1)
	{
		aux1 = a->head;
		while (aux1->next->next)
			aux1 = aux1->next;
		aux1->next->next = a->head;
		a->head = aux1->next;
		aux1->next = NULL;
		write(1, "rra\n", 4);
	}
}

static void	rra_in(t_stack *a)
{
	t_nodo	*aux1;

	if (a->len > 1)
	{
		aux1 = a->head;
		while (aux1->next->next)
			aux1 = aux1->next;
		aux1->next->next = a->head;
		a->head = aux1->next;
		aux1->next = NULL;
	}
}

void	rrb(t_stack *b)
{
	t_nodo	*aux1;

	if (b->len > 1)
	{
		aux1 = b->head;
		while (aux1->next->next)
			aux1 = aux1->next;
		aux1->next->next = b->head;
		b->head = aux1->next;
		aux1->next = NULL;
		write(1, "rrb\n", 4);
	}
}

static void	rrb_in(t_stack *b)
{
	t_nodo	*aux1;

	if (b->len > 1)
	{
		aux1 = b->head;
		while (aux1->next->next)
			aux1 = aux1->next;
		aux1->next->next = b->head;
		b->head = aux1->next;
		aux1->next = NULL;
	}
}

void	rrr(t_stack *a, t_stack *b)
{
	rra_in (a);
	rrb_in (b);
	write(1, "rrr\n", 4);
}
