int	ft_isalnum(int ch)
{
	unsigned char	c;

	c = (unsigned char)(ch);
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
