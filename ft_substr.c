#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t  s_len;
	size_t  sub_len;
	size_t  i;
	char    *str;

	if (!s)
		return (NULL);

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}

	sub_len = s_len - start;
	if (sub_len > len)
		sub_len = len;

	str = malloc(sub_len + 1);
	if (!str)
		return (NULL);

	i = 0;
	while (i < sub_len)
	{
		str[i] = s[start + i];
		i++;
	}

	str[i] = '\0';
	return (str);
}
