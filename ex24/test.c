/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:52:25 by saberton          #+#    #+#             */
/*   Updated: 2024/05/15 12:58:32 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*str = "Hola que tal ?";
	char	*s2 = "Hola que tal";
	int	a = 42;
	int	b = 21;

	ft_putchar('S');
	printf("\n");
	ft_putstr(str);
	printf("\n");
	printf("%d \n", ft_strcmp(str, s2));
	printf("%d \n", ft_strlen(str));
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
}
