/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:23:01 by ade-agui          #+#    #+#             */
/*   Updated: 2021/04/16 05:06:54 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int istr;
	int ifin;

	istr = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[istr] != '\0')
	{
		ifin = 0;
		while (str[istr + ifin] == to_find[ifin] && str[istr + ifin] != '\0')
		{
			if (to_find[ifin + 1] == '\0')
				return (&str[istr]);
			ifin++;
		}
		istr++;
	}
	return (0);
}
