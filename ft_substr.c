#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int ft_strlen(const char *s)
{
    int index;
    index = 0;
    while (s[index])
        index++;
    return(index);
}


char	*ft_substr(char const *s, int start, size_t len)
{
	int index2;
	char	*str;

	index2 = 0;
	if (start >= ft_strlen(s) || len == 0)
		{
			str = malloc(1);
			str[0] = '\0';
			return(str);
		}
	// if(len < 0 )
	// 	return(NULL);
	if (start < 0)
		start = ft_strlen(s) + start;

	str = (char *)malloc(ft_strlen(s) - start);
	if (!str)
		return(NULL);
	while (start < ft_strlen(s))
		str[index2++] = s[start++];
	str[index2] = '\0';
	return (str);		
}

void	test_substr(const char *s, unsigned int start, size_t len)
{
	char *result = ft_substr(s, start, len);
	if (result)
		printf("ft_substr(\"%s\", %u, %zu) = \"%s\"\n", s, start, len, result);
	else
		printf("ft_substr(\"%s\", %u, %zu) = NULL\n", s, start, len);
	free(result);
}

// int	main(void)
// {
// 	test_substr("Hello World", 0, 5);          // "Hello"
// 	test_substr("Hello World", 6, 5);          // "World"
// 	test_substr("Hello World", 6, 50);         // "World" (limite > fin)
// 	test_substr("Hello World", 11, 5);         // "" (start == len de la chaîne)
// 	test_substr("Hello World", 15, 3);         // "" (start > len de la chaîne)
// 	test_substr("", 0, 5);                     // "" (chaîne vide)
// 	test_substr("Hello", 0, 0);                // "" (longueur 0)

// 	return 0;
// }
