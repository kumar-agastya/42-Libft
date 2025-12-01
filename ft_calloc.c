#include "libft.h"
#include <stdint.h>

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if ((count != 0 && size != 0) && count > SIZE_MAX / size)
        return (NULL);
    if (count == 0 || size == 0)
    {
        ptr = malloc(1);
        if (!ptr)
            return (NULL);
        ft_bzero(ptr, 1);
        return (ptr);
    }
    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}
