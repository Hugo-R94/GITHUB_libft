#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_isprint(char c)
{
    if (c >= '0'&& c <= '9')
        return (1);
    else   
        return (0);
}

// int main()
// {
//     char char_c = 'e';
//     printf("is char isdigit ? = %d \n", ft_isprint(char_c));
// }