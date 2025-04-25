#ifndef libft_h
# define libft_h


#include <stdlib.h>

void    *ft_bzero(char *s, int size);
int		ft_strlen(const char *s);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    *ft_memset(char *s, int c, int size);
void ft_striteri(char *s, void (*f)(unsigned int, char *));
#endif 