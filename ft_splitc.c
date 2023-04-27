static int	string_counter(char const *s, char c, int *i)
{
	int	strcount;
​
	strcount = 0;
	while (s[*i])
	{
		while (s[*i] == c)
			(*i)++;
		if (s[*i])
			strcount++;
		while (s[*i] && s[*i] != c)
			(*i)++;
	}
	return (strcount);
}
​
char	**ft_split(char const *s, char c)
{
	int		strcount;
	int		i;
	int		j;
	int		k;
	char	**string_array;
​
	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	strcount = string_counter(s, c, &i);
	string_array = malloc(sizeof(char *) * (strcount + 1));
	if (!string_array)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			string_array[k++] = ft_substr(s, i, j - i);
			i = j;
		}
	}
	string_array[k] = NULL;
	return (string_array);
}
