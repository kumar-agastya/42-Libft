#include "libft.h"

static void	*ft_free(char **arr, size_t i)
{
	while (i--)
		free(arr[i]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	count;
	char	**out;

	if (!s)
		return (NULL);
	i = 0;
	count = 0;
	while (s[i])
		if (s[i++] != c && (i == 1 || s[i - 2] == c))
			count++;
	out = malloc((count + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	i = 0;
	count = 0;
	while (s[i])
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			out[count] = ft_substr(s, start, i - start);
			if (!out[count++])
				return (ft_free(out, count - 1));
		}
		else
			i++;
	out[count] = NULL;
	return (out);
}
