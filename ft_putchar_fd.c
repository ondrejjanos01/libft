/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:09:00 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/24 13:17:31 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);

}

/*int main(void)
{
    char ch = 'A';
    int fd = STDOUT_FILENO; // Using STDOUT_FILENO for testing (standard output)

    ft_putchar_fd(ch, fd);

    return 0;
}*/
