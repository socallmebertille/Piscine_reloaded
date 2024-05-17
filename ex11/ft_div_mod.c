/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:04:54 by saberton          #+#    #+#             */
/*   Updated: 2024/05/13 19:17:38 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include<stdio.h>
int	main(void)
{
	int	div;
	int	mod;

	div = 0;
	mod = 0;
	ft_div_mod(8, 4, &div, &mod);
	printf("%d\n%d\n", div, mod);
	return (0);
}*/
