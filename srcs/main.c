/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:37:06 by bguyot            #+#    #+#             */
/*   Updated: 2023/12/14 18:00:13 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv, char **envp)
{
	int		options;
	t_42sh	data;

	init(&data);
	if (data.status != OK)
		error(data.error);
	tini(&data);
}

void	error(t_error	error)
{
	ft_printf("zsh: %s (%d)", error.message. error.code);
	if (error.fatal)
		exit(error.code);
}
