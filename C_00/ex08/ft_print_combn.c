/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 06:45:10 by ade-agui          #+#    #+#             */
/*   Updated: 2021/04/13 19:53:53 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char array[9], int n, int c)
{
	write(1, array, n);
	(c != 0) ? write(1, ", ", 2) : 0;
}

void	ft_print_combn(int n)
{
	char	array[9];
	int		i;
	int		c;

	i = -1;
	while (++i < n)
		array[i] = '0' + i;
	c = n - 1;
	while (c >= 0)
	{
		if (c == n - 1 || array[c] == '9' - (n - 1 - c))
		{
			ft_write(array, n, c);
		}
		if (array[c] == '9' - (n - 1 - c))
			--c;
		else if (c != n - 1)
		{
			++c;
			array[c] = array[c - 1] + 1;
			ft_write(array, n, c);
		}
		array[c]++;
	}
}
