/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anacarol <anacarol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:16:30 by anacarol          #+#    #+#             */
/*   Updated: 2021/04/13 15:04:57 by anacarol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
			i++;
		else
		{
			c++;
			i++;
		}
	}
	if (i == c)
		return (1);
	else
		return (0);
}
