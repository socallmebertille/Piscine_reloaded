/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:01:24 by saberton          #+#    #+#             */
/*   Updated: 2024/05/15 18:33:31 by saberton         ###   ########.fr       */
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

/*int	main(void)
{
	char	*str = "Hola que tal";
	
	ft_putstr(str);
	return (0);
}*/
