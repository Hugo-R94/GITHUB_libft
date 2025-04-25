/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:05:07 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/25 15:07:44 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	index;
	
	index = 0;
	while (s[index])
	{
		s[index] = f(index, s[index]);
		index++;
	}
	return (s);
}
