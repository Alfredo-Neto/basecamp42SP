/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:18:33 by ade-agui          #+#    #+#             */
/*   Updated: 2021/04/13 02:41:48 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			number;
	int				div;
	int				start;
	unsigned int	num;

	if (nb < 0)
		write(1, "-", 1);
	num = nb < 0 ? -nb : nb;
	start = 0;
	div = 1000000000;
	while (div > 0)
	{
		number = num / div + '0';
		if (number != '0' || start)
		{
			start = 1;
			write(1, &number, 1);
		}
		num = num % div;
		div = div / 10;
	}
}
