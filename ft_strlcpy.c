/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:25:07 by imontero          #+#    #+#             */
/*   Updated: 2023/03/02 18:51:19 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (src[i2])
		i2++;
	if (size < 1)
		return (i2);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i2);
}

/*
int	main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "Yo soy tudpadre";
	size = 10;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n\n", dest);
	printf("%lu\n", strlcpy(dest, src, size));
	printf("%s\n\n", dest);
}
*/