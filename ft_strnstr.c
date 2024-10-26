/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:38:12 by sjoukni           #+#    #+#             */
/*   Updated: 2024/10/25 15:43:27 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	str = (char *)s;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] && (i + j) < len)
			j++;
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
