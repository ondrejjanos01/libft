/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:53:59 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 11:08:59 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	len = 0;
	if (dest < src)
	{
		len = n;
		while (len >0)
		{
			len--;
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)dest)[len]= ((unsigned char *)src)[len];
            len++;
		}

	}
	return (dest);
}

/*int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];

    ft_memmove(dest, src, strlen(src) + 1);
    printf("Copied string: %s\n", dest);

    return 0;
}*/
