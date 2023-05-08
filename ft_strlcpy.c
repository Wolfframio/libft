/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:25:07 by imontero          #+#    #+#             */
/*   Updated: 2023/05/08 10:55:23 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	copia src en dst (dstsize numero de caracteres)
	devuelve el tamaño del string que intentaba crear, es decir el tamaño de src.
	Recorre hasta dstsize -1 para colocar caracter nulo al final
*/

size_t	ft_strlcpy(char	*dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 1)
		return (ft_strlen(src));
	while (src[i] && i < (dstsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
