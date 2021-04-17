/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 05:46:53 by ade-agui          #+#    #+#             */
/*   Updated: 2021/04/13 17:13:56 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		start;
	int		temp;

	size--;
	start = 0;
	while (start < size)
	{
		temp = tab[start];
		tab[start] = tab[size];
		tab[size] = temp;
		size--;
		start++;
	}
}
