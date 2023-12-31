

#include <unistd.h>

void	*ft_memmove(void *str1, const void *str2, size_t count)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)str1;
	s2 = (char *)str2;
	i = 0;
	if (s1 > s2)
	{
		while (count > 0)
		{
			s1[count - 1] = s2[count - 1];
			count--;
		}
	}
	else
	{		
		while (i < count)
		{
			s1[i] = s2[i];
			i++;
		}
	}		
	return (str1);
}
