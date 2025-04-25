#include <stdio.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    char character = (char) c;
    while (n > 0)  
    {
        if (*(char *)s == character)
            return(void *)s;
        n--;
        s++;
    }
    return (void *)s;
   
}

// Prototype de ft_memchr (si tu l'as implémentée)
void *ft_memchr(const void *s, int c, size_t n);

int main() {
    char data[] = "Hell, world!";
    char search = 'o';
    size_t size = 10; // On limite la recherche aux 10 premiers caractères

    // Test avec memchr
    char *ptr_memchr = memchr(data, search, size);
    if (ptr_memchr)
        printf("memchr    : Trouvé '%c' à la position %p\n", *ptr_memchr, memchr(data, search, size));
    else
        printf("memchr    : Non trouvé dans les %zu premiers caractères\n", size);

    // Test avec ft_memchr
    char *ptr_ft_memchr = ft_memchr(data, search, size);
    if (ptr_ft_memchr)
        printf("ft_memchr : Trouvé '%c' à la position %p\n", *ptr_ft_memchr, ft_memchr(data, search, size));
    else
        printf("ft_memchr : Non trouvé dans les %zu premiers caractères\n", size);

    return 0;
}