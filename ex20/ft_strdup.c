/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:58:56 by saberton          #+#    #+#             */
/*   Updated: 2024/05/13 23:12:06 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	while (src[len])
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*#include <stdio.h>
int	main(void)
{
	char	*src = "Hola que tal";

	printf("%s\n", ft_strdup(src));
	return (0);
}*/
