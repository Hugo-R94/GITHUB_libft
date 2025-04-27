#include "libft.h"
#include <stdio.h>
#include <string.h>

void print_separator(const char *title)
{
    printf("\n=== %s ===\n", title);
}

void example_striteri(unsigned int i, char *c)
{
    *c = *c + i;
}

char example_strmapi(unsigned int i, char c)
{
    return c + i;
}

int main(void)
{
    // ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
    print_separator("CHARACTER CHECKS");
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
    printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
    printf("ft_isalnum('Z') = %d\n", ft_isalnum('Z'));
    printf("ft_isascii(128) = %d\n", ft_isascii(128));
    printf("ft_isprint(31) = %d\n", ft_isprint(31));

    // ft_strlen
    print_separator("STRLEN");
    printf("ft_strlen(\"Hello World\") = %zu\n", ft_strlen("Hello World"));

    // ft_toupper, ft_tolower
    print_separator("TOUPPER / TOLOWER");
    printf("ft_toupper('a') = %c\n", ft_toupper('a'));
    printf("ft_tolower('Z') = %c\n", ft_tolower('Z'));

    // ft_atoi
    print_separator("ATOI");
    printf("ft_atoi(\"   -42\") = %d\n", ft_atoi("   -42"));

    // ft_calloc + ft_bzero
    print_separator("CALLOC / BZERO");
    int *tab = (int *)ft_calloc(5, sizeof(int));
    if (tab)
    {
        tab[0] = 42;
        ft_bzero(tab, 5 * sizeof(int));
        printf("tab[0] after bzero = %d\n", tab[0]);
        free(tab);
    }

    // ft_memset, ft_memcpy, ft_memmove
    print_separator("MEMORY FUNCTIONS");
    char mem1[20] = "abcdefghij";
    ft_memset(mem1, 'X', 5);
    printf("ft_memset result: %s\n", mem1);

    char mem2[20] = "HelloWorld";
    ft_memcpy(mem2 + 5, mem2, 5);
    printf("ft_memcpy overlapped result: %s\n", mem2);

    char mem3[20] = "1234567890";
    ft_memmove(mem3 + 2, mem3, 5);
    printf("ft_memmove overlapped result: %s\n", mem3);

    // ft_memchr, ft_memcmp
    print_separator("MEMCHR / MEMCMP");
    printf("ft_memchr: %s\n", (char *)ft_memchr("abcdef", 'd', 6));
    printf("ft_memcmp: %d\n", ft_memcmp("abc", "abd", 3));

    // ft_strdup
    print_separator("STRDUP");
    char *dup = ft_strdup("Hello");
    printf("ft_strdup: %s\n", dup);
    free(dup);

    // ft_substr, ft_strjoin, ft_strtrim, ft_split
    print_separator("STR FUNCTIONS");
    char *substr = ft_substr("HelloWorld", 5, 5);
    printf("ft_substr: %s\n", substr);
    free(substr);

    char *joined = ft_strjoin("Hello", "World");
    printf("ft_strjoin: %s\n", joined);
    free(joined);

    char *trimmed = ft_strtrim("   Hello World   ", " ");
    printf("ft_strtrim: %s\n", trimmed);
    free(trimmed);

    char **split = ft_split("one:two:three", ':');
    for (int i = 0; split[i]; i++)
    {
        printf("ft_split[%d]: %s\n", i, split[i]);
        free(split[i]);
    }
    free(split);

    // ft_strchr, ft_strrchr
    print_separator("STRCHR / STRRCHR");
    printf("ft_strchr: %s\n", ft_strchr("Hello", 'l'));
    printf("ft_strrchr: %s\n", ft_strrchr("Hello", 'l'));

    // ft_strncmp, ft_strnstr
    print_separator("STRNCMP / STRNSTR");
    printf("ft_strncmp: %d\n", ft_strncmp("abc", "abd", 3));
    printf("ft_strnstr: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15));

    // ft_strlcpy, ft_strlcat
    print_separator("STRLCPY / STRLCAT");
    char dst[20] = "123";
    printf("ft_strlcpy: %zu\n", ft_strlcpy(dst, "abcdef", 20));
    printf("Result: %s\n", dst);

    char dst2[20] = "Hello ";
    printf("ft_strlcat: %zu\n", ft_strlcat(dst2, "World", 20));
    printf("Result: %s\n", dst2);

    // ft_strmapi, ft_striteri
    print_separator("STRMAPI / STRITERI");
    char *mapped = ft_strmapi("abc", example_strmapi);
    printf("ft_strmapi: %s\n", mapped);
    free(mapped);

    char iteri_str[] = "abc";
    ft_striteri(iteri_str, example_striteri);
    printf("ft_striteri: %s\n", iteri_str);

    // ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd
    print_separator("FD FUNCTIONS (printing to stdout)");
    ft_putchar_fd('X', 1);
    write(1, "\n", 1);
    ft_putstr_fd("Hello FD", 1);
    write(1, "\n", 1);
    ft_putendl_fd("Hello with newline", 1);
    ft_putnbr_fd(12345, 1);
    write(1, "\n", 1);

    // ft_lstnew
    print_separator("BONUS: LSTNEW");
    t_list *new = ft_lstnew("42");
    if (new)
    {
        printf("ft_lstnew: %s\n", (char *)new->content);
        free(new);
    }

    return 0;
}
