/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:22:50 by imontero          #+#    #+#             */
/*   Updated: 2023/04/20 15:57:45 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
	La substring empieza desde el índice ’start’ y
	tiene una longitud máxima ’len’.
	Parametros
	- s: La string desde la que crear la substring.
	- start: El índice del caracter en ’s’ desde el que
		empezar la substring.
	- len: La longitud máxima de la substring.
	Devuelve
	La substring resultante.
	NULL si falla la reserva de memoria.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc(1 + len * sizeof(char));
	if (!sub)
		return (NULL);
	sub[len] = '\0';
	while (s[start] && len > 0)
	{
		len--;
		sub[len] = s[start + len];
	}
	return (sub);
}
