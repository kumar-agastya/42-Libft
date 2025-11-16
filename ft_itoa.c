#include "libft.h"

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (len-- > (str[0] == '-'))
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
