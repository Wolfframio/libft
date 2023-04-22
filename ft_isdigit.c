#include <stdio.h>

int	ft_isdigit (int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int main ()
{
	printf ("%i\n", ft_isdigit(2));
	return (0);
}