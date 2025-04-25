#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
	int index1;
	int index2;

	index1 = 0;
	if (little[0] == '\0')
			return ((char *)big);
    while (big[index1] && index1 < len)
    {
		index2 = 0;
		
        if (big[index1] == little[index2])
		{
			while (big[index1 + index2]  == little[index2] && index1 + index2 < len)
			{
				if ( little[index2 + 1] == '\0')
					return ((char *)&big[index1]);
				index2++;
			}
			
			index2++;
		}
		index1++;
    }
	return (0);
    
}

int main(int argc, char const *argv[])
{
	char longstr[] = "les chaussettes de l'archiduchesse sont elles sechent ?";
	char shortstr[] = "e";
	printf("strnstr = %s", ft_strnstr(longstr,shortstr,4));
	printf("\n");
	return 0;
}
