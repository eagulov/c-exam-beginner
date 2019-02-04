/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagulov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 14:00:12 by eagulov           #+#    #+#             */
/*   Updated: 2019/02/04 15:23:16 by eagulov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mputchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 4)
		if (argv[2][0] && argv[3][0] && (argv[2][1] == '\0' && argv[3][1] == '\0'))
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
				mputchar(argv[1][i]);
				i++;
			}
	mputchar('\n');
	return (0);
}
