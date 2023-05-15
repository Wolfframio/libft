/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:09:38 by imontero          #+#    #+#             */
/*   Updated: 2023/04/20 16:23:21 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findstart(char *s1, char *set)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (set[i])
	{
		while (set[i] == s1[start])
		{
			start++;
			i = 0;
		}
		i++;
	}
	return (start);
}

static int	ft_findend(char *s1, char *set)
{
	int	i;
	int	end;

	i = ft_strlen(set) - 1;
	end = ft_strlen(s1) - 1;
	while (set[i])
	{
		while (set[i] == s1[end])
		{
			end--;
			i = ft_strlen(set) - 1;
		}
		i--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new;

	start = ft_findstart((char *)s1, (char *)set);
	end = ft_findend((char *)s1, (char *)set);
	new = ft_substr((char *)s1, start, (end + 1) - start);
	return (new);
}
