#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_isprint(char c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else   
        return (0);
}

int main()
{
    char char_c = 'e';
    printf("is char is ascii ? = %d \n", ft_isprint(char_c));
}