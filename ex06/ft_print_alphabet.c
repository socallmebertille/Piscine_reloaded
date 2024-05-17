/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:26:09 by saberton          #+#    #+#             */
/*   Updated: 2024/05/15 18:34:30 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	lettre;

	lettre = 0;
	while (lettre < 26)
	{
		ft_putchar('a' + lettre);
		lettre++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
