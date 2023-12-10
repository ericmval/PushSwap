/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:01:44 by emartin2          #+#    #+#             */
/*   Updated: 2023/12/08 21:05:11 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static unsigned char	*ft_position(const char *c, int *sign);
static long int			numerice(unsigned char *digi);

static unsigned char	*ft_position(const char *c, int *sign)
{
	while (*c != '\0')
	{
		if (*c == ' ' || *c == '\n' || *c == '\v' || *c == '-'
			|| *c == '\r' || *c == '\t' || *c == '\f' || *c == '+')
		{
			if (*sign != 0)
				return (NULL);
			if (*c == '+')
				*sign = 1;
			if (*c == '-')
				*sign = -1;
			c++;
		}
		else if (*c < '0' || *c > '9')
			return (NULL);
		else if (*c >= '0' && *c <= '9')
			return ((unsigned char *) c);
	}
	return (NULL);
}

long int	ft_atoi_push(const char *nptr)
{
	int				sign;
	unsigned char	*exit;
	long int		numexit;

	sign = 0;
	exit = ft_position(nptr, &sign);
	if (exit)
	{
		numexit = numerice(exit);
		if (sign < 0)
			numexit *= -1;
		return (numexit);
	}
	else
		return (0);
}

static long int	numerice( unsigned char *digi)
{
	int			mult;
	long int	exit;
	int			i;
	long int	suma;

	exit = 0;
	mult = 1;
	i = 0;
	suma = 0;
	while (digi[i] != '\0' && digi[i] >= '0' && digi[i] <= '9')
	{
		i++;
	}
	while (i > 0)
	{
		exit = digi[i - 1] - '0';
		suma = suma + (exit * mult);
		i--;
		mult = mult * 10;
	}
	return (suma);
}
/*
en:
converts a char string to an int variable
esp:
convierte una cadena char en una variable tipo int
se ha modificado para aceptar long int y salir del programa 
si supera el maximo de int
*/
