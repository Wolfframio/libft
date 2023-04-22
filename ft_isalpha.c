#include <stdio.h>

int	ft_isalpha (int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}

int main ()
{
	printf ("%i\n", ft_isalpha('W'));
	return (0);
}