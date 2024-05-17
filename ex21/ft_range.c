/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:13:15 by saberton          #+#    #+#             */
/*   Updated: 2024/05/16 16:55:45 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*#include <stdio.h>
int	main(void)
{
	int	*tab;
	int	i;

	tab = ft_range(1, 4);
	i = 0;
	if (tab == NULL)
		return (0);
	//printf("%d %d %d %d\n", tab[0], tab[1], tab[2], tab[3]);
	while (i < 4)
		printf("%d ", tab[i++]);
	free(tab);
	return (0);
}*/
