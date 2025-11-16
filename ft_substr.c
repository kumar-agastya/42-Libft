#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		str = malloc(1);
		if (str)
			str[0] = '\0';
		return (str);
	}
	sub_len = s_len - start;
	if (sub_len > len)
		sub_len = len;
	str = malloc(sub_len + 1);
	if (!str)
		return (NULL);
	for (size_t i = 0; i < sub_len; i++)
		str[i] = s[start + i];
	str[sub_len] = '\0';
	return (str);
}
