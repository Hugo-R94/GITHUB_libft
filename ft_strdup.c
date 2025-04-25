#include "libft.h"

char    *ft_strdup(const char *source)
{
    int size_source;
    int	i;
    char *str_dup;

    size_source = ft_strlen(source);
	i = 0;
    str_dup = (char *)malloc(size_source * sizeof(char));
    if (!str_dup)
        return(NULL);
    while (i < size_source)
    {
        str_dup[i] = source[i];
        i++;
    }
    return (str_dup);
    
}