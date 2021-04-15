/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 05:33:59 by ade-agui          #+#    #+#             */
/*   Updated: 2021/04/13 18:04:01 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	char	i;
	int		j;

	i = '0';
	j = 0;
	if (*str == '\0')
		return (0);
	while (i != '\0')
	{
		i = str[j + 1];
		j++;
	}
	return (j);
}
