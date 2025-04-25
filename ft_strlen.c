#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(const char *s)
{
    int index;
    index = 0;
    while (str[index])
        index++;
    return(index);
}

int main()
{
    char string[] = "rentrer texte";
    printf("ft_strlen = %d \n",ft_strlen(string));
    printf("strlen = %d \n",strlen(string));
}