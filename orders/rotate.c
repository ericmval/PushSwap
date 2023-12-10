/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:20:40 by emartin2          #+#    #+#             */
/*   Updated: 2023/12/06 15:30:22 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

static void	ra_in(t_stack *a);
static void	rb_in(t_stack *b);

void	ra(t_stack *a)
{
	t_nodo	*new;
	t_nodo	*aux1;

	if (a->len > 1)
	{
		new = a->head;
		a->head = a->head->next;
		aux1 = a->head;
		new->next = NULL;
		while (aux1->next)
			aux1 = aux1->next;
		aux1->next = new;
		write(1, "ra\n", 3);
	}
}

static void	ra_in(t_stack *a)
{
	t_nodo	*new;
	t_nodo	*aux1;

	if (a->len > 1)
	{
		new = a->head;
		a->head = a->head->next;
		aux1 = a->head;
		new->next = NULL;
		while (aux1->next)
			aux1 = aux1->next;
		aux1->next = new;
	}
}

void	rb(t_stack *b)
{
	t_nodo	*new;
	t_nodo	*aux1;

	if (b->len > 1)
	{
		new = b->head;
		b->head = b->head->next;
		aux1 = b->head;
		new->next = NULL;
		while (aux1->next)
			aux1 = aux1->next;
		aux1->next = new;
		write(1, "rb\n", 3);
	}
}

static void	rb_in(t_stack *b)
{
	t_nodo	*new;
	t_nodo	*aux1;

	if (b->len > 1)
	{
		new = b->head;
		b->head = b->head->next;
		aux1 = b->head;
		new->next = NULL;
		while (aux1->next)
			aux1 = aux1->next;
		aux1->next = new;
	}
}

void	rr(t_stack *a, t_stack *b)
{
	ra_in(a);
	rb_in(b);
	write(1, "rr\n", 3);
}
