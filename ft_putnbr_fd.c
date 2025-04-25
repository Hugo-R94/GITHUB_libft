/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:14:17 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/25 15:19:53 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putnbr_fd(int n, int fd)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar_fd(fd,'-');
		n = nb * -1;
	}
	if (nb >= 0)
		n = nb;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	ft_putchar_fd(fd,(n + '0'));
}

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c,1)
}
