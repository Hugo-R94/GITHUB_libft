#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_isprint(char c)
{
    if (c >= 0 && c <= 126)
        return (1);
    else   
        return (0);
}
