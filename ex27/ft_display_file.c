/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_file.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: beduroul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 19:15:24 by beduroul     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 19:15:26 by beduroul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int		fd;
	char	c;

	if (ac < 2)
		return (write(1, "File name missing.\n", 19));
	if (ac > 2)
		return (write(1, "Too many arguments.\n", 20));
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &c, 1))
		ft_putchar(c);
	close(fd);
	return (0);
}
