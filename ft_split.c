#include "libft.h"

static void	*ft_free(char **arr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
	return (NULL);
}

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static int	ft_fill_words(char const *s, char c, char **out, size_t count)
{
	size_t	i;
	size_t	start;
	size_t	idx;

	i = 0;
	idx = 0;
	while (s[i] && idx < count)
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		out[idx] = ft_substr(s, start, i - start);
		if (!out[idx])
		{
			ft_free(out, idx);
			return (0);
		}
		idx++;
	}
	out[idx] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**out;

	if (!s)
		return (NULL);
	count = ft_word_count(s, c);
	out = malloc((count + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	if (!ft_fill_words(s, c, out, count))
		return (NULL);
	return (out);
}
