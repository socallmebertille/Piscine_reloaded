/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:45:37 by saberton          #+#    #+#             */
/*   Updated: 2024/05/13 19:58:47 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	s;

	s = 1;
	while (s <= 2147483647)
	{
		if (nb <= 0)
			return (0);
		while (s < nb / s)
			s++;
		if (s * s != nb)
			return (0);
		return (s);
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(25));
	return (0);
}*/
