#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2,int size)
{
    int index;

    index = 0;
    while (s1[index] == s2[index] && index < size && s1[index])
        index++;
    return (s1[index] - s2[index]);
    // if(s1[index]>s2[index])
    //     return(1);
    // else if (s1[index]<s2[index])
    //     return(-1);
    // else
    //     return(0);
}

// int main()
// {
//     char string1[] = "le cucul";
//     char string2[] = "les cucul";
//     int size_n = 3;
//     printf("strncmp    = %d \n",strncmp(string1,string2,size_n));
//     printf("ft_strncmp = %d \n",ft_strncmp(string1,string2,size_n));
// }