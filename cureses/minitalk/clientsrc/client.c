/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhjang <minhjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:57:33 by minhjang          #+#    #+#             */
/*   Updated: 2022/07/30 17:59:36 by minhjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

static int  error_msg(char *msg);
static int  pid_check(char *pid);

int main(int argc, char **argv){

    unsigned int pid;
    
    if (argc != 3)
        return (error_msg("You must enter pid and string"));
    pid = pid_check(argv[1]);
    signal(SIGUSR1, receive_check_handler);
    send_string_sig(pid, argv[2]);
    return (0);
}

static int  pid_check(char *pid)
{
    int atoid;

    if (pid[0] == '0')
        return (0);
    atoid = ft_atoi(pid);
    if (atoid == 0)
        return (-1);
    else
        return (atoid);
}

static int  error_msg(char *msg)
{
    ft_printf("%s\n", msg);
    return (0);
}
