/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 02:22:02 by ade-agui          #+#    #+#             */
/*   Updated: 2021/04/16 02:29:04 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int index_src;
	int index_dest;

	index_src = 0;
	index_dest = 0;
	while (dest[index_dest] != '\0')
		index_dest++;
	while (src[index_src] != '\0')
	{
		dest[index_dest] = src[index_src];
		index_src++;
		index_dest++;
	}
	dest[index_dest] = '\0';
	return (dest);
}
