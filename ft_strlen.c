/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:08:33 by imontero          #+#    #+#             */
/*   Updated: 2023/03/06 11:33:21 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int		main(void)
{
	char	*str;
	
	str = "que te meto con el mechero";
	printf("%d\n", ft_strlen(str));
}
*/