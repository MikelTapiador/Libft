/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 10:54:21 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/25 17:49:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", isdigit('A'));
	printf("%d\n", isdigit('z'));
	printf("%d\n", isdigit('1'));
	printf("%d\n", isdigit('@'));
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", ft_isdigit('z'));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('@'));
	return (0);
}
