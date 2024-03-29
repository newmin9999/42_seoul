/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhjang <minhjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:33:17 by minhjang          #+#    #+#             */
/*   Updated: 2021/09/29 20:08:52 by minhjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	idx;
	int	*output;

	output = (int *)malloc(sizeof(int) * length);
	idx = 0;
	while (idx < length)
	{
		output[idx] = (*f)(tab[idx]);
		idx++;
	}
	return (output);
}
