/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_function2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhjang <minhjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:29:21 by minhjang          #+#    #+#             */
/*   Updated: 2022/05/05 18:48:59 by minhjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ros(t_stack *s);



void	ra(t_stack  *s)
{
	ros(s);
}

void	rb(t_stack  *s)
{
	ros(s);
}

void	rr(t_stack *a, t_stack *b)
{
	ros(a);
	ros(b);
}

static void	ros(t_stack *s)
{
	int	tmp;
	int	idx;

	if (s->top <= 0)
		return ;
	idx = s->top;
	tmp = peek(s);
	while (idx > 0)
	{
		s->ary[idx] = s->ary[idx - 1];
		idx--;
	}
	s->ary[0] = tmp;
}
