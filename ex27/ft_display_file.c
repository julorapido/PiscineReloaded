/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:21:33 by jsaintho          #+#    #+#             */
/*   Updated: 2024/05/15 12:22:44 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

void	disp_file(int fd)
{
	char	buffer;
	
	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac != 2)
	{
		if (ac > 2)
			write(2, "Too many arguments.\n", 20);
		if (ac < 2)
			write(2, "File name missing.\n", 19);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	disp_file(fd);
	close(fd);
	return (0);
}
