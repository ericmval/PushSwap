/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:32:34 by emartin2          #+#    #+#             */
/*   Updated: 2023/12/08 20:59:24 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	is_digit(int argc, char **argv);
static int	is_repited(int argc, char **argv);
static int	is_sorted(int argc, char **argv);
static int	int_range(int argc, char **argv);

void	check_input(int argc, char **argv)
{
	if (!is_digit(argc, argv))
		ft_error();
	if (is_repited(argc, argv))
		ft_error();
	if (is_sorted(argc, argv))
		exit (0);
	if (!int_range(argc, argv))
		ft_error();
}

static int	is_digit(int argc, char **argv)
{
	int	i;
	int	e;

	i = 1;
	while (i < argc)
	{
		e = 1;
		if (argv[i][0] != '-' && (argv[i][0] < '0' || argv[i][0] > '9'))
			return (0);
		while (argv[i][e] != '\0')
		{
			if (argv[i][e] < '0' || argv[i][e] > '9')
				return (0);
			e++;
		}
		i++;
	}
	return (1);
}

static int	is_repited(int argc, char **argv)
{
	int	i;
	int	e;

	i = 0;
	while (++i < argc)
	{
		e = 0;
		while (++e < argc)
		{
			if ((ft_atoi_push(argv[i]) == ft_atoi_push(argv[e]))
				&& (i != e))
				return (1);
		}
	}
	return (0);
}

static int	is_sorted(int argc, char **argv)
{
	int	num1;
	int	num2;
	int	i;

	i = 0;
	while (++i <= argc - 2)
	{
		num1 = ft_atoi_push(argv[i]);
		num2 = ft_atoi_push(argv[i + 1]);
		if (num1 > num2)
			return (0);
	}
	return (1);
}

static int	int_range(int argc, char **argv)
{
	int			i;
	long int	num;

	i = 1;
	while (i < argc)
	{
		num = ft_atoi_push(argv[i]);
		if (ft_strlen_push(argv[i]) > 11 || num > 2147483647
			|| num < -2147483648)
			return (0);
		i++;
	}
	return (1);
}
