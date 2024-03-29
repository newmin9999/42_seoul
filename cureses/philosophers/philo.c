/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhjang <minhjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 09:34:05 by minhjang          #+#    #+#             */
/*   Updated: 2022/08/27 19:03:21 by minhjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	sit_at_table(t_philo *philos);

int	main(int argc, char **argv)
{
	t_args	args;
	t_philo	*philos;
	t_queue	eat_queue;

	if (!input_check(argc, argv, &args))
		return (0);
	init_queue(&eat_queue, args.philos_n);
	init_table(&args, &philos, &eat_queue);
	sit_at_table(philos);
	free_all(&philos);
	return (0);
}

static void	sit_at_table(t_philo *philos)
{
	int			idx;
	pthread_t	r;

	idx = -1;
	printf("Philosophers are going to eat\n");
	while (++idx < 2)
	{
		write(1, " . ", 3);
		sleep(1);
	}
	printf("\n");
	pthread_create(&r, NULL, routine, (void *)philos);
	dead_monitor(philos);
	pthread_join(r, NULL);
}

int	time_diff(int p, int q)
{
	if (q > 9000 && p <= 9000)
			p += 10000;
	return (p - q);
}
