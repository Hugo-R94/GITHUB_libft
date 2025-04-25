#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char *s, int c)
{
    int index;
    index = 0;
    while (s[index])
    {
        if (s[index] == c)
            return (char *)&s[index];
        index++;
    }
    return(NULL);
    
}

int main(void)
{
    char base_str[] = "ilc y a c et c ma0is aussi c";
    char to_find = '0';
    printf("strchr    = %p\n",strchr(base_str,to_find));
    printf("ft_strchr = %p",ft_strchr(base_str,to_find));
}