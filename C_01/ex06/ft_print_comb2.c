/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:51:15 by ade-agui          #+#    #+#             */
/*   Updated: 2021/04/13 19:47:00 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = -1;
	while (x++ < 98)
	{
		y = x;
		while (y++ < 99)
		{
			ft_putchar('0' + (x / 10));
			ft_putchar('0' + (x % 10));
			ft_putchar(' ');
			ft_putchar('0' + (y / 10));
			ft_putchar('0' + (y % 10));
			if (x != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
