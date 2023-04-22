#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup (char *str)
{
	char	*new;
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[len])
			len++;
	
	if (!(new =(char *)malloc(sizeof(char) * (len + 1))))
		return NULL;
	
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}

	new[i] = '\0';
	return (new);
}

/*int		main(void)
{
	char	*str;
	char	*res;

	str = "HELLo";
	res = ft_strdup(str);
	printf("%s\n", res);
	free(res);
	return (0);
}*/