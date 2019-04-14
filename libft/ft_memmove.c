#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if ((unsigned char *)src < (unsigned char *)dest)
		while (len--)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
