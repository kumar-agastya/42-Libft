#include "libft.h"

static size_t	ft_sub_len(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (0);
	sub_len = s_len - start;
	if (sub_len > len)
		sub_len = len;
	return (sub_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	sub_len;
	size_t	i;

	if (!s)
		return (NULL);
	sub_len = ft_sub_len(s, start, len);
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
