#include "libft.h"

// char	*ft_strrchr(const char *s, int c)
// {
// 	const char	*last;

// 	last = NULL;
// 	while (1)
// 	{
// 		if (*s == (char)c)
// 			last = s;
// 		if (*s == '\0')
// 			break ;
// 		s++;
// 	}
// 	return ((char *)last);
// }
char	*ft_strrchr(const char *str, int c)
{
	char			*p;
	unsigned char	ch;
	size_t			offset;

	ch = c;
	offset = ft_strlen(str);
	p = (char *)str + offset;
	if (ch == '\0')
		return (p++);
	while (p >= str)
	{
		if (*p == ch)
			return (p);
		p--;
	}
	p = NULL;
	return (p);
}