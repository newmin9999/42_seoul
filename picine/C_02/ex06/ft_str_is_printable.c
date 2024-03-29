/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhjang <minhjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:22:31 by minhjang          #+#    #+#             */
/*   Updated: 2021/09/15 21:11:09 by minhjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (!((str[idx] >= 32) && (str[idx] < 127)))
			return (0);
		idx++;
	}
	return (1);
}
