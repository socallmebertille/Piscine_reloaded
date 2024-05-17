/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:40:56 by saberton          #+#    #+#             */
/*   Updated: 2024/05/16 17:56:19 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char	buffer[100];

	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac != 2)
	{
		if (ac < 2)
			write(2, "File name missing.\n", 19);
		if (ac > 2)
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	ft_display_file(fd);
	close(fd);
	if (close(fd) == -1)
		return (1);
	return (0);
}
