/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:01:59 by malancar          #+#    #+#             */
/*   Updated: 2022/11/18 10:08:23 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	*str2;

	str2 = (unsigned char *)str;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str2[i] == (unsigned char)c)
			return ((char *)&str2[i]);
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main(int ac, char ** av)
{
	(void)ac;
	printf("ft_strrchr : %s\n", ft_strrchr(av[1], av[2][0]));
	printf("strrchr : %s\n", strrchr(av[1], av[2][0]));
}*/
