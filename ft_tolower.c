#include <unistd.h>
#include <stdio.h>

int ft_tolower(int i)
{
    if (i >= 'A' && i <='Z')
		i = i + 32;
	return (i);
}