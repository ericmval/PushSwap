/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:35:44 by emartin2          #+#    #+#             */
/*   Updated: 2023/12/06 15:39:33 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	ft_strlen_push(const char *s)
{
	size_t	i;
	int		zero;
	int		sign;

	sign = 1;
	zero = 1;
	i = 0;
	while (*s != '\0')
	{
		if ((*s == '+' || *s == '-') && sign)
		{
			sign = 0;
			s++;
		}
		if (zero && *s == '0')
			s++;
		else
		{
			i++;
			s++;
			zero = 0;
		}
	}
	return (i);
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	ft_error2(t_stack *a)
{
	write(1, "Error\n", 6);
	free_t_stack(a);
	exit(1);
}
