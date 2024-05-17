/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:26:00 by saberton          #+#    #+#             */
/*   Updated: 2024/05/13 20:57:36 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (1);
	i = 0;
	while (i++ < argc - 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
