/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:50:17 by emartin2          #+#    #+#             */
/*   Updated: 2023/12/08 18:56:29 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	create_t_stack(t_stack *a, t_stack *b)
{
	a->len = 0;
	a->head = NULL;
	b->len = 0;
	b->head = NULL;
}

void	fill_t_stack(int argc, char **argv, t_stack *a)
{
	create_first_t_nodo(argc, argv, a);
	while (--argc > 1)
		add_node_first(argc, argv, a);
	sort_t_stack(a);
}

void	create_first_t_nodo(int argc, char **argv, t_stack *a)
{
	t_nodo	*new;

	new = (t_nodo *)malloc (sizeof(t_nodo));
	if (!new)
		exit (1);
	a->head = new;
	a->head->valor = ft_atoi_push(argv[argc - 1]);
	a->head->ordenado = 0;
	a->head->orden = '\0';
	a->head->next = NULL;
	a->len = 1;
}

void	add_node_first(int argc, char **argv, t_stack *a)
{
	t_nodo	*new;
	t_nodo	*aux;

	new = (t_nodo *)malloc (sizeof(t_nodo));
	if (!new)
		ft_error2(a);
	aux = a->head;
	a->head = new;
	new->next = aux;
	a->head->valor = ft_atoi_push(argv[argc -1]);
	a->head->ordenado = 0;
	a->head->orden = '\0';
	a->len = a->len + 1;
}

void	sort_t_stack(t_stack *a)
{
	t_nodo	*aux1;
	t_nodo	*aux2;
	int		i;

	i = 0;
	while (++i < a->len +1)
	{
		aux1 = a->head;
		if (aux1->ordenado)
		{
			while (aux1->ordenado)
				aux1 = aux1->next;
		}
		aux2 = aux1->next;
		while (aux2)
		{
			if (aux1->valor > aux2->valor && !aux2->ordenado)
				aux1 = aux2;
			aux2 = aux2->next;
		}
		aux1->orden = i;
		aux1->ordenado = 1;
	}
}
