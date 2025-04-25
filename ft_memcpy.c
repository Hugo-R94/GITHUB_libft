#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dest,const void *src,int size)
{
    int index;
    unsigned char *source = (unsigned char *)src;
    unsigned char *destination = (unsigned char *)dest;
    index = 0;
    while (index<size)
    {
        destination[index] = source[index];
        index++;
    }
    return destination;
    
}



// int main() {
//     char src[20] = "memmove test";
//     char dest1[20] = "copier ici";
//     char dest2[20] = "copier ici";

//     int size = 12;

//     // Test avec la fonction standard
//     memmove(dest1, src, size);

//     // Test avec ft_memmove
//     ft_memmove(dest2, src, size);

//     // Affichage des résultats
//     printf("memmove   : %s\n", dest1);
//     printf("ft_memmove: %s\n", dest2);

//     // Vérification avec memcmp
//     if (memcmp(dest1, dest2, size) == 0) {
//         printf("✅ Les deux memmove donnent le même résultat !\n");
//     } else {
//         printf("❌ Il y a une différence entre memmove et ft_memmove !\n");
//     }

//     return 0;
// }