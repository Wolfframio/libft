/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:30:04 by marvin            #+#    #+#             */
/*   Updated: 2023/04/11 20:30:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*
Envía el carácter ’c’ al file descriptor
especificado.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
