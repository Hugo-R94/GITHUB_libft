#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_isalnum(char c)
{
    if ((c >= 'a' && c <= 'z')|| (c >= 'A'&& c <= 'Z')||(c >= '0'&& c <= '9'))
        return (1);
    else   
        return (0);
}

int main()
{
    char char_c = ' ';
    printf("is char alphanum ? = %d \n", ft_isalnum(char_c));
}