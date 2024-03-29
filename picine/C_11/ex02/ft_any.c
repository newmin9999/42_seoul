/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhjang <minhjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:39:11 by minhjang          #+#    #+#             */
/*   Updated: 2021/09/29 20:09:35 by minhjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f) (char *))
{
	int	idx;

	idx = 0;
	while (tab[idx])
	{
		if ((*f)(tab[idx]))
			return (1);
		idx++;
	}
	return (0);
}

