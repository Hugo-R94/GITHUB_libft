/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:07:29 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/25 15:26:51 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	index;
	char *new_str;
	
	index = 0;
	new_str = (char *)malloc(ft_strlen(s)*sizeof(char));
	if (!new_str)
		return NULL;
	while (s[index])
	{
		new_str[index] = f(index, s[index]);
		index++;
	}
	return (new_str);
}

char	to_upper(char c)
{
	if (c >='a' && c<='z')
		c= c - 32;
	return c;
}

// int main(int argc, char **argv)
// {
// 	int	index = 1;
// 	if (argc < 0)
// 		return(0);
// 	while (index < argc)
// 	{
// 		printf("%s", ft_strmapi(argv[index], to_upper));
// 		printf(" ");
// 		index++;
// 	}
// }
	
	