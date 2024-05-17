/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:39:06 by saberton          #+#    #+#             */
/*   Updated: 2024/05/13 19:44:59 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
	return (0);
}*/
