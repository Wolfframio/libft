static	int	ft_countwordds(char *str, char sep)
{
	int	i;
	int	strcount;

	i = 0;
	strcount = 0;
	while (str[i])
	{
		if (str[i] == sep)
			i++;
		else
		{
			strcount++;
			while (str[i] != sep && str[i])
				i++;
		}
	}
	return (strcount);
}

static void ft_copywords(char const *s, char c, char **result, int count)
{
    int     i;
    int     j;
    int     k;

    i = 0;
    j = 0;
    while (j < count)
    {
        k = 0;
        while (s[i] == c)
            i++;
        while (s[i + k] != c && s[i + k])
            k++;
        result[j] = ft_substr(s, i, k);
        if (!result[j])
            return ;
        i += k;
        j++;
    }
}

char **ft_split(char const *s, char c)
{
    int     count;
    char    **result;

    count = ft_countwords(s, c); // Contar el número de subcadenas en s
    result = (char **)malloc((count + 1) * sizeof(char *)); // Asignar memoria para el array de subcadenas
    if (!result)
        return (NULL);
    result[count] = NULL; // Establecer el último elemento del array como NULL
    ft_copywords(s, c, result, count); // Copiar las subcadenas en el array result
    return (result); // Devolver el array de subcadenas
}

int  main(void)
{
   char    *s = "      gfdgf      ";
   char    c = ' ';
   size_t  count;
   char    **tab = ft_split(s, c);
   size_t  i;


   i = 0;
   count = ft_size_substring(s, c);
   printf("s[0]: %c\n", s[0]);
   printf("COUNT en main: %zu\n", count);
   while (i < count)
   {
       printf("%s\n", tab[i]);
       i++;
   }
}
