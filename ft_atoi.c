#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *nptr)
{
    int index;
    int signe;
    int result;

    result = 0;
    index = 0;
    if(nptr[0] == '-')
    {
        signe = -1;
        index++;
    }
    else
       signe = 1;
    if (nptr[1] == '-' || nptr[1] == '+')
        return (0);
    
    while (nptr[index] >= '0' && nptr[index] <= '9')
        result = result * 10 + (nptr[index++] - 48);
    return(signe * result);   
}

// int main(int argc,const char **argv)
// {
//     printf("atoi    = %d\n",atoi(argv[1]));
//     printf("ft_atoi = %d",ft_atoi(argv[1]));

// }