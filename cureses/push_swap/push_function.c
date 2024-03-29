/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhjang <minhjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:02:55 by minhjang          #+#    #+#             */
/*   Updated: 2022/05/08 18:39:38 by minhjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack *a, t_stack *b, t_result *result)
{
	swap(a);
	swap(b);
	push_result(result, 3);
}

void	pa(t_stack *a, t_stack *b, t_result *result)
{
	if (b->top != -1)
		push(a, pop(b));
	else
		return ;
	push_result(result, 4);
}

void	pb(t_stack *b, t_stack *a, t_result *result)
{
	if (b->top != -1)
		push(a, pop(b));
	else
		return ;
	push_result(result, 5);
}

void	sa(t_stack *a, t_result *result)
{
	if (a->top < 1)
		return ;
	swap(a);
	push_result(result, 1);
}

void	sb(t_stack *b, t_result *result)
{
	if (b->top < 1)
		return ;
	swap(b);
	push_result(result, 2);
}
