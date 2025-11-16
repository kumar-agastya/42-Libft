#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
	size_t  i;
	unsigned char   *bytes;

	bytes = (unsigned char *)s;
	i = 0;
	while (i < n)
   		bytes[i++] = 0;
}	