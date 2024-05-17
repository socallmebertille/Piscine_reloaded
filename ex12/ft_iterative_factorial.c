/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:18:25 by saberton          #+#    #+#             */
/*   Updated: 2024/05/13 19:37:06 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	while (fact > 0)
	{
		nb *= fact;
		fact--;
	}
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(-1));
	return (0);
}*/
