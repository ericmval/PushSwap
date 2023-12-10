/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:30:49 by emartin2          #+#    #+#             */
/*   Updated: 2023/12/06 15:34:42 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

static void	sa_in(t_stack *a);
static void	sb_in(t_stack *b);

void	sa(t_stack *a)
{
	t_nodo	*aux1;
	t_nodo	*aux2;

	if (a->len > 1)
	{
		aux1 = a->head;
		aux2 = aux1->next->next;
		a->head = a->head->next;
		a->head->next = aux1;
		aux1->next = aux2;
		write(1, "sa\n", 3);
	}
}

static void	sa_in(t_stack *a)
{
	t_nodo	*aux1;
	t_nodo	*aux2;

	if (a->len > 1)
	{
		aux1 = a->head;
		aux2 = aux1->next->next;
		a->head = a->head->next;
		a->head->next = aux1;
		aux1->next = aux2;
	}
}

void	sb(t_stack *b)
{
	t_nodo	*aux1;
	t_nodo	*aux2;

	if (b->len > 1)
	{
		aux1 = b->head;
		aux2 = aux1->next->next;
		b->head = b->head->next;
		b->head->next = aux1;
		aux1->next = aux2;
		write(1, "sb\n", 3);
	}
}

static void	sb_in(t_stack *b)
{
	t_nodo	*aux1;
	t_nodo	*aux2;

	if (b->len > 1)
	{
		aux1 = b->head;
		aux2 = aux1->next->next;
		b->head = b->head->next;
		b->head->next = aux1;
		aux1->next = aux2;
	}
}

void	ss(t_stack *a, t_stack *b)
{
	sa_in(a);
	sb_in(b);
	write(1, "ss\n", 3);
}
