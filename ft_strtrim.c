/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:25:53 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/21 13:14:22 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*array;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(s1);
	k = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j > 0 && ft_strchr(set, s1[i]) != NULL)
		j--;
	array = malloc(j - i + 1);
	while (i < j)
	{
		array[k] = s1[i];
		k++;
		i++;
	}
	return (array);
}
int main (void)
{
	char string[] = "              Hola esto es una pruebaaaa                 ";
	char set[] = " ha";
	printf("%s",ft_strtrim(string,set));
}