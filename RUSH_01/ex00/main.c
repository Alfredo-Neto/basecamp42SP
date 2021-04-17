/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakira-f <fakira-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:45:40 by fakira-f          #+#    #+#             */
/*   Updated: 2021/04/12 00:46:21 by fakira-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puterr(void);
int		ft_input_valid(int argc, char **argv);

int		main(int argc, char *argv[])
{
	if	(ft_input_valid(argc, argv))
		ft_puterr();
	return (0);
}

void	ft_puterr(void)
{
	write(1, "Error\n", 6);
}

int		ft_input_valid(int argc, char **argv)
{
	char	*ptr;
	int		count;

	count = 0;
	ptr = argv[1];
	if (argc != 2)
		return (0);
	while (*ptr != '\0')
	{
		if (count % 2 != 0 && *ptr != 32)
			return (0);
		if (count % 2 == 0 && (*ptr < '1' || *ptr > '4'))
			return (0);
		ptr++;
		count++;
	}
	if (count != 31)
		return (0);
	return (1);
}
