/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:13:15 by imontero          #+#    #+#             */
/*   Updated: 2023/03/06 19:36:26 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "H   ";
	s2 = "Hrojow";
	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("%d\n", strncmp(s1, s2, 2));
}