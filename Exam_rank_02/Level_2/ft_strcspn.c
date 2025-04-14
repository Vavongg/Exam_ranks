/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:57:20 by ainthana          #+#    #+#             */
/*   Updated: 2025/04/07 14:57:20 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char	*first;

	first = s;
	while (*s)
	{
		if (ft_strchr(reject, *s))
			break ;
		s++;
	}
	return (s - first);
}
