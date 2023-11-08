char *ft_strstr(char *str, char *to_find)
{
	int i;
	int k;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i + k] == to_find[k])
		{
			k++;
			if (to_find[k] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
