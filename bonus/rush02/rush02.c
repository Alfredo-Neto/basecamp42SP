/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 00:47:29 by apires-d          #+#    #+#             */
/*   Updated: 2021/04/04 17:35:59 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	linha(int x, char first, char middle, char last);

void	rush(int x, int y)
{
	int contar;

	contar = 1;
	while (contar <= y)
	{
		if (contar == 1)
		{
			linha(x, 'A', 'B', 'A');
		}
		else if (contar == y)
		{
			linha(x, 'C', 'B', 'C');
		}
		else
		{
			linha(x, 'B', ' ', 'B');
		}
		contar++;
	}
}

void	linha(int x, char first, char middle, char last)
{
	int contar;

	contar = 1;
	while (contar <= x)
	{
		if (contar == 1)
		{
			ft_putchar(first);
		}
		else if (contar == x)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(middle);
		}
		contar++;
	}
	ft_putchar('\n');
}
