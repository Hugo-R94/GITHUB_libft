#include "libft.h"


void	*ft_calloc(size_t nmemb, size_t size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = (void *)malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, (nmemb * size));
	return (str);
}