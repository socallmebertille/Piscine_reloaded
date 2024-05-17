/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:38:23 by saberton          #+#    #+#             */
/*   Updated: 2024/05/16 14:07:21 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	ft_maj(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*#include <stdio.h>

int	main(void)
{
	char	*tab[4] = {"HOLA", " ?", "QUE", NULL};

	printf("%d\n", ft_count_if(tab, &ft_maj));
	return (0);
}*/
