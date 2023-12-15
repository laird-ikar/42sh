/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:07:04 by bguyot            #+#    #+#             */
/*   Updated: 2023/12/15 16:26:29 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <init.h>
#include <t_42sh.h>
#include <errror.h>

void	init(t_42sh *data)
{
	set_errror(data, OK, "", !FATAL);
}

void	tini(t_42sh *data)
{
	set_errror(data, NOT_IMPLEMENTED, "tini: Not Implemented", FATAL);
}

void	load_env(t_42sh *data, char **envp)
{
	while (*envp)
	{

		envp++;
	}
}
