#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
    int index;
    char *buffer;
    
    buffer = NULL;
    index = 0;
    while (s[index])
    {
       
        if (s[index] == c)
			buffer = (char *)&s[index];
		index++;
        
     }    
	if (buffer == NULL)
	 	return(NULL);
	else
	return (buffer);
}

// int main(void)
// {
//     char base_str[] = "ilkjfdjf  jjjfe ";
//     char to_find = 'c';
//     printf("strrchr    = %p\n",strrchr(base_str,to_find));
//     printf("ft_strrchr = %p",ft_strrchr(base_str,to_find));
// }