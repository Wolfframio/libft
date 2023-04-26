
#include "libft.h"

/*
	Reserva (utilizando malloc(3)) un array de strings
	resultante de separar la string ’s’ en substrings
	utilizando el caracter ’c’ como delimitador. El
	array debe terminar con un puntero NULL.
	
	- Parámetros 
	s: La string a separar.
	c: El carácter delimitador.

	- Valor devuelto 
	El array de nuevas strings resulatente de la separación.
	NULL si falla la reserva de memoria.
	"Hola que tal"
*/

static	int	ft_strcount(char *s, char sep)
{
	int	i;
	int	strcount;

	i = 0;
	strcount = 0;
	while (s[i])
	{
		if (s[i] == sep)
			strcount++;
		i++;
	}
	return (strcount);

}

char    **ft_split(char const *s, char c)
{
	int		strcount;
	char	**result;

	strcount = ft_strcount(s, c);
	result = (char **)malloc(sizeof(char *) * strcount);
	if (!result)
		return (NULL);
	


}