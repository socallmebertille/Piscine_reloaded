/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:00:14 by saberton          #+#    #+#             */
/*   Updated: 2024/05/13 19:03:16 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 4;
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
}*/
