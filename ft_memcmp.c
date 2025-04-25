#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    while (*(char *)s1 == *(char *)s2 && n > 0 )
        {
            s1 = (char *)s1 + 1;
            s2 = (char *)s2 + 1;
            n--;
        }
    return (*(char *)s1 - *(char *)s2);
}


// int main() {
//     char str1[] = "Hello, world!";
//     char str2[] = "Hello, world!";
//     char str3[] = "Hello, friend!";

//     size_t size = 10; // Nombre d'octets à comparer

//     // Test avec memcmp
//     int result_memcmp = memcmp(str1, str3, size);
//     printf("memcmp    : %d\n", result_memcmp);

//     // Test avec ft_memcmp
//     int result_ft_memcmp = ft_memcmp(str2, str3, size);
//     printf("ft_memcmp : %d\n", result_ft_memcmp);

//     return 0;
// }