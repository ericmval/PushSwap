/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_ini.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:20:05 by emartin2          #+#    #+#             */
/*   Updated: 2023/12/06 15:08:39 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc <= 1 || argv[1][0] == '\0')
		return (1);
	check_input (argc, argv);
	create_t_stack(&a, &b);
	fill_t_stack(argc, argv, &a);
	algoritm_selector(&a, &b);
	free_t_stack(&a);
	return (0);
}

void	algoritm_selector(t_stack *a, t_stack *b)
{
	if (a->len == 2)
		write (1, "sa\n", 3);
	else if (a->len == 3)
		numbers_3(a);
	else if (a->len <= 20)
		numbers_10(a, b);
	else if (a->len <= 100)
		numbers_big(a, b, 12);
	else if (a->len > 100)
		numbers_big(a, b, 10);
}

void	numbers_3(t_stack *a)
{
	if (list_is_sort(a))
		return ;
	if (a->head->orden > a->head->next->orden
		&& a->head->orden > a->head->next->next->orden)
		ra (a);
	else if (a->head->next->orden > a->head->next->next->orden
		&& a->head->orden < a->head->next->orden)
		rra(a);
	if (a->head->orden > a->head->next->orden)
		sa (a);
}

void	numbers_10(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (a->len > 3)
	{
		pole_num_a(a, find_number_a(a, ++i));
		pb (a, b);
	}
	numbers_3(a);
	while (b->len)
		pa(a, b);
}

void	numbers_big(t_stack *a, t_stack *b, int part)
{
	int	div;
	int	maxf;

	div = a->len / part;
	maxf = div * 2;
	while (a->len)
	{
		while (find_numbers_a(a, maxf))
		{
			pole_num_a(a, find_numbers_a(a, maxf));
			if (a->head->orden <= maxf - div)
				pb(a, b);
			else
			{
				pb(a, b);
				rb(b);
			}
		}
		maxf = maxf + (div * 2);
	}
	while (b->len)
	{
		pole_num_b(b, find_number_b(b, b->len));
		pa(a, b);
	}
}
