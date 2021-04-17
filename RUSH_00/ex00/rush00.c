/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/04 23:31:57 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line_rush(int lin, char first, char middle, char last)
{
	int cont;

	cont = 1;
	while (cont <= lin)
	{
		if (cont == 1)
		{
			ft_putchar(first);
		}
		else if (cont == lin)
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
			print_line_rush(x, 'o', '-', 'o');
		}
		else if (cont == y)
		{
			print_line_rush(x, 'o', '-', 'o');
		}
		else
		{
			print_line_rush(x, '|', ' ', '|');
		}
		cont++;
	}
}
