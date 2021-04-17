/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/04 20:49:05 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line_rush(int line, char first, char middle, char last)
{
	int cont;

	cont = 1;
	while (cont <= line)
	{
		if (cont == 1)
		{
			ft_putchar(first);
		}
		else if (cont == line)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(middle);
		}
		cont++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int cont;

	cont = 1;
	while (cont <= y)
	{
		if (cont == 1)
		{
			print_line_rush(x, 'A', 'B', 'C');
		}
		else if (cont == y)
		{
			print_line_rush(x, 'A', 'B', 'C');
		}
		else
		{
			print_line_rush(x, 'B', ' ', 'B');
		}
		cont++;
	}
}
