/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:37:06 by bguyot            #+#    #+#             */
/*   Updated: 2023/12/15 11:06:30 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

int	main(int argc, char **argv, char **envp)
{
	int		options;
	t_42sh	data;

	init(&data);
	if (data.error.code != OK)
		error(data.error);
	options = parse_options(argc, argv);
	load_env(&data, envp);
	tini(&data);
}

void	error(t_error	error)
{
	ft_printf("zsh: %s (%d)", error.message, error.code);
	if (error.fatal)
		exit(error.code);
}
