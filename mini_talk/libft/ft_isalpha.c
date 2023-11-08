int	ft_isalpha(int ch)
{
	unsigned char	c;

	c = (unsigned char)(ch);
	if (c < 'A')
		return (0);
	else if ((c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}
