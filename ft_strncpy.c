/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:50:12 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/22 12:22:58 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		 dst[i] = '\0';
		 i++;
	}
	return (dst);
}

int	main()
{
	char	src[] = "HelloWord";
	char	dst[];

	ft_strncpy(dst, src, 5);
	printf("The new string is %s\n", dst);
	return (0);
}
