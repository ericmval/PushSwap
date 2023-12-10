/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:42:54 by emartin2          #+#    #+#             */
/*   Updated: 2023/12/08 18:49:05 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	list_is_sort(t_stack *a)
{
	t_nodo	*aux;

	aux = a->head;
	while (aux->next->next)
	{
		if (aux > aux->next)
			return (0);
		aux = aux->next;
	}
	return (1);
}

int	find_number_a(t_stack *a, int find)
{
	int		i;
	t_nodo	*aux;

	aux = a->head;
	i = 0;
	while (++i <= a->len)
	{
		if (aux->orden == find)
			return (i);
		else
			aux = aux->next;
	}
	return (0);
}

void	pole_num_a(t_stack *a, int pos)
{
	int	i;

	i = 0;
	if ((pos * 2) > a->len)
	{
		while (++i <= (a->len - pos + 1))
			rra (a);
	}
	else
	{
		while (++i < pos)
			ra (a);
	}
}

int	find_numbers_a(t_stack *a, int find)
{
	int		i;
	t_nodo	*aux;

	aux = a->head;
	i = 0;
	while (++i <= a->len)
	{
		if (aux->orden <= find)
			return (i);
		else
			aux = aux->next;
	}
	return (0);
}

void	pole_num_b(t_stack *b, int pos)
{
	int	i;

	i = 0;
	if ((pos * 2) > b->len)
	{
		while (++i <= (b->len - pos + 1))
			rrb (b);
	}
	else
	{
		while (++i < pos)
			rb (b);
	}
}
