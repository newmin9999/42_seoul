/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhjang <minhjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:04:12 by minhjang          #+#    #+#             */
/*   Updated: 2021/09/24 23:12:51 by minhjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				check_deli(char c, char *charset);
int				field_num(char *str, char *charset);
void			set_field_size(char *str, char *charset, char **result);

char	**ft_split(char *str, char *charset)
{
	char	**result;

	result = (char **)malloc((field_num(str, charset) + 1) * sizeof (char *));
	if (result == NULL)
		return (NULL);
	set_field_size(str, charset, result);
	return (result);
}

void	set_field_size(char *str, char *charset, char **result)
{
	int	var[4];

	var[0] = -1;
	var[1] = var[0];
	var[2] = 0;
	var[3] = 0;
	while (str[var[3]])
	{
		if (!check_deli(str[var[3]], charset))
		{
			if (var[3] == 0)
				var[0] = var[3];
			else if (check_deli(str[var[3] - 1], charset))
				var[0] = var[3];
			if (!str[var[3] + 1] || check_deli(str[var[3] + 1], charset))
			{
				var[1] = var[3];
				result[var[2]] = (char *)malloc((var[1] - var[0] + 2)
						* sizeof (char));
				ft_strlcpy(result[var[2]++], &str[var[0]], var[1] - var[0] + 2);
			}
		}
		var[3]++;
	}
	result[var[2]] = 0;
}

int	field_num(char *str, char *charset)
{
	int	idx;
	int	counter;

	idx = 0;
	counter = 0;
	while (str[idx])
	{
		if (!check_deli(str[idx], charset))
		{	
			if (idx == 0)
				counter++;
			else if (check_deli(str[idx - 1], charset))
				counter++;
		}
		idx++;
	}
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;

	idx = 0;
	if (size == 0 )
	{
		while (src[idx])
			idx++;
		return (idx);
	}
	while ((idx < size - 1) && src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	while (src[idx])
		idx++;
	return (idx);
}

int	check_deli(char c, char *charset)
{
	int	idx;

	idx = 0;
	while (charset[idx])
	{
		if (c == charset[idx])
			return (1);
		idx++;
	}
	return (0);
}
