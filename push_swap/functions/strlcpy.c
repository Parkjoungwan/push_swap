#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t result;

	result = 0;
	while (s[result])
		result++;
	return (result);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t src_len;
	size_t i;

	if (!dest || !src)
		return (0);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (src_len);
	while (src[i] && i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
