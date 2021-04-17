/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 02:33:23 by ade-agui          #+#    #+#             */
/*   Updated: 2021/04/16 02:33:24 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				index_dest;
	unsigned int	index_src;

	index_src = 0;
	index_dest = 0;
	while (dest[index_dest] != '\0')
		index_dest++;
	while (src[index_src] != '\0' && index_src < nb)
	{
		dest[index_dest] = src[index_src];
		index_src++;
		index_dest++;
	}
	dest[index_dest] = '\0';
	return (dest);
}
