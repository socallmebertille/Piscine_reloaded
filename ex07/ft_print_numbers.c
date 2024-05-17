/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:40:13 by saberton          #+#    #+#             */
/*   Updated: 2024/05/15 18:34:44 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	nb;

	nb = 0;
	while (nb <= 9)
	{
		ft_putchar(nb + '0');
		nb++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
