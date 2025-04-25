#include <unistd.h>
#include <stdio.h>

int ft_toupper(int i)
{
    if (i >= 'a' && i <= 'z')
        i = i - 32;
    return (i);
}

// int main(void)
// {
//     char test[] = "abcABC123!@#";
//     int i = 0;

//     while (test[i])
//     {
//         printf("%c -> %c\n", test[i], ft_toupper(test[i]));
//         i++;
//     }
//     return (0);
// }
