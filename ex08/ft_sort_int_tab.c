/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 02:26:03 by ade-agui          #+#    #+#             */
/*   Updated: 2021/04/15 02:31:48 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;
	int menor;

	i = -1;
	while (++i < size)
	{
		menor = i;
		j = i + 1;
		while (j <= size)
		{
			if (tab[j] < tab[menor])
				menor = j;
			j++;
		}
		if (menor != i)
		{
			temp = tab[i];
			tab[i] = tab[menor];
			tab[menor] = temp;
		}
		else
			tab[i] = tab[menor]++;
	}
}
