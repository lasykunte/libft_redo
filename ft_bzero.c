/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:22:18 by lramovha          #+#    #+#             */
/*   Updated: 2019/07/15 13:36:34 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char)s;
	while (n--)
	{
		s[i] = 0;
		i++;
	}
}

int	main()
{
	int b[] = "lasy";
}
