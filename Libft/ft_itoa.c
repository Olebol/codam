/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: opelser <opelser@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 00:01:10 by opelser       #+#    #+#                 */
/*   Updated: 2022/11/08 22:21:21 by opelser       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int		len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_makearr(char *res, long n, int i)
{
	res[i + 1] = '\0';
	if (n == 0)
		res[i] = '0';
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
	}
	while (n)
	{
		res[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char		*res;
	const int	len = ft_intlen(n);

	res = malloc(len + 1);
	if (!res)
		return (NULL);
	ft_makearr(res, n, len - 1);
	return (res);
}

// int	main()
// {
// 	printf("\n\nfinal result: %s\n", ft_itoa(INT32_MIN));
// 	return(0);
// }