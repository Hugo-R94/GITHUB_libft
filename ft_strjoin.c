#include <libft.h>

char    *ft_strjoin(char const *s1,char const *s2)
{
    char    *str_join;
    int index;
    int index2;

    index2 = 0;
    index = 0;
    str_join = malloc(ft_strlen(s1) + ft_strlen(s2));
    if (!str_join)
        return(NULL);
    while (s1 == '\0')
    {
        str_join = s1;
        str_join++;
        s1++;
    }
    while (s2 =='\0')
    {
        str_join = s2;
        str_join++;
        s2++;
    }
    return(str_join);
    
}