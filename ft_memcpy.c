/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:01:22 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/19 16:31:16 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*ptr;
	const unsigned char		*ptr2;

	i = 0;
	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	while (i < n)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dst);
}
/* #include <string.h>
#include <stdio.h>

int main (void)
{
	char str[50];
	char str2[] = "Lavapies lava mal";
	char str3[50];
	char str4[] = "Lavapies lava mal";
	memcpy(str, str2, 33);
	ft_memcpy(str3, str4, 33);
	printf("%s\n", str);
	printf("%s\n", str3);
} */
