int	ft_isdigit(int ch)
{
	unsigned char	c;

	c = (unsigned char)(ch);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
