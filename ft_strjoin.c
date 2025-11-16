#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < len2)
	{
		str[len1 + j] = s2[j];
		j++;
	}

	str[len1 + len2] = '\0';
	return (str);
}
