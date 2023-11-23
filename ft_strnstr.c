/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahraou <ysahraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:01:24 by ysahraou          #+#    #+#             */
/*   Updated: 2023/11/22 13:46:05 by ysahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	ltlen;

	ltlen = ft_strlen(little);
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (len > 0 && big[i])
	{
		if (ft_strncmp(little, &big[i], ltlen) == 0)
		{
			if (len >= i)
				return ((char *)&big[i]);
		}
		i++;
		len--;
	}
	return (NULL);
}

// char *ft_strnstr(const char *big, const char *little, size_t len) {
// 	size_t	len_l;
// 	// int i;

// 	if (len == 0)
// 		return ((char *)big);
// 	len_l = ft_strlen(little);
// 	while (len-- > 0) {
// 		while (*big && *little && *big == *little) {
// 			big++;
// 			little++;
// 		}
// 		if (*little == '\0')
// 			return ((char *)big - len_l);
// 		big++;
// 		len--;
// 	}
// 	return (NULL);
// }
