/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagulov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:48:58 by eagulov           #+#    #+#             */
/*   Updated: 2019/02/04 13:54:54 by eagulov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mputchar(char c)
{
	write(1, &c, 1);
}

char	last_param(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		mputchar(str[i]);
		i++;
	}
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		last_param(argv[argc - 1]);
	mputchar('\n');
	return (0);
}
