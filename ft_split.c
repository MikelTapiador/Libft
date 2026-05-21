/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:12:42 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/21 19:10:16 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == sep)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != sep)
			i++;
	}
	return (count);
}
size_t	word_len(char const *s, char sep)
[
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		
	}
	
]


/* int main (void)
{
	char string[] = "Me llamo Mikel Tapiador";
	printf("%zu",count_words( string, ' '));
} */