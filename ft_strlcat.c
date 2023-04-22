/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:17:08 by imontero          #+#    #+#             */
/*   Updated: 2023/03/06 12:50:09 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res_dest;
	unsigned int	res_src;

	i = ft_strlen(dest);
	j = 0;
	res_dest = ft_strlen(dest);
	res_src = ft_strlen(src);
	if (size < 1)
		return (res_src + size);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < res_dest)
		return (res_src + size);
	else
		return (res_dest + res_src);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char			dest[50] = "sef";
	char			src[50] = "sed";
	unsigned int	size;

	size = 4;
    printf("%d\n", ft_strlen(dest));
	printf("%d\n", ft_strlen(src));
    printf("%lu\n", strlcat(dest, src, size));
    printf("%d\n", ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
}

/*
The strlcat() function (with the L) achieves the same goal 
as the venerable strcat() function: to append one string onto
the end of the other. The problem with strcat(), 
however, is that a size limitation isn’t set for the destination buffer.
It’s quite possible for this buffer to overflow.
As a solution, the strlcat() function offers an additional argument, 
dstsize. This argument sets the length of the destination string,
effectively equal to its buffer size. Here’s the function’s prototype:
size_t strlcat(char * restrict dst, const char * restrict src,
size_t dstsize);
Characters from string src are appended to string dst.
The dstsize argument is equal to the size of the dst buffer,
which caps the number of characters copied to this size,
minus one for the null character. Here’s the awkward way the man
page puts it:
strlcat() appends string src to the end of dst.
It will append at most dstsize – strlen(dst) – 1 characters.
It will then NUL-terminate, unless dstsize is 0 or the original
dst string was longer than dstsize (in practice this should not
happen as it means that either dstsize is incorrect or that dst
is not a proper string).
*/