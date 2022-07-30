/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhjang <minhjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:27:45 by minhjang          #+#    #+#             */
/*   Updated: 2022/07/30 17:52:08 by minhjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

#include "../libft/includes/ft_printf.h"
#include <unistd.h>
#include <signal.h>

void    sig_handler1(int signum, siginfo_t *info, void *context);
void    sig_handler2(int signum, siginfo_t *info, void *context);

#endif