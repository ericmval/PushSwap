/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:54:13 by emartin2          #+#    #+#             */
/*   Updated: 2023/12/06 16:10:21 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct t_nodo
{
	int				valor;
	int				orden;
	int				ordenado;
	struct t_nodo	*next;		
}	t_nodo;

typedef struct t_stack
{
	int		len;
	t_nodo	*head;
}	t_stack;

void		numbers_3(t_stack *a);
void		numbers_10(t_stack *a, t_stack *b);
void		numbers_big(t_stack *a, t_stack *b, int part);
void		check_input(int argc, char **argv);
long int	ft_atoi_push(const char *nptr);
size_t		ft_strlen_push(const char *s);
void		ft_error(void);
void		ft_error2(t_stack *a);
void		free_t_stack(t_stack *a);
void		create_t_stack(t_stack *a, t_stack *b);
void		fill_t_stack(int argc, char **argv, t_stack *a);
void		create_first_t_nodo(int charc, char **argv, t_stack *a);
void		add_node_first(int argc, char **argv, t_stack *a);
void		algoritm_selector(t_stack *a, t_stack *b);
void		sort_t_stack(t_stack *a);
int			list_is_sort(t_stack *a);
int			find_number_a(t_stack *a, int find);
int			find_number_b(t_stack *b, int find);
int			find_numbers_a(t_stack *a, int find);
void		pole_num_a(t_stack *a, int pos);
void		pole_num_b(t_stack *b, int pos);
void		sa(t_stack *a);
void		sb(t_stack *b);
void		ss(t_stack *a, t_stack *b);
void		pb( t_stack *a, t_stack *b);
void		pa(t_stack *a, t_stack *b);
void		ra(t_stack *a);
void		rb(t_stack *b);
void		rr(t_stack *a, t_stack *b);
void		rra(t_stack *a);
void		rrb(t_stack *b);
void		rrr(t_stack *a, t_stack *b);

#endif
