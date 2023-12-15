/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:04:31 by bguyot            #+#    #+#             */
/*   Updated: 2023/12/15 16:20:02 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <options.h>

int	parse_options(int argc, char **argv)
{
	int	options;
	int	i;

	i = 1;
	while (i < argc)
	{
		(void) argv[i];
		i++;
	}
	return (options);
}
