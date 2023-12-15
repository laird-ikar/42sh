/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:17:07 by bguyot            #+#    #+#             */
/*   Updated: 2023/12/15 11:19:07 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	error(t_error	*error)
{
	ft_printf("zsh: %s (%d)", error->message, error->code);
	if (error->fatal)
		exit(error->code);
}

void	set_error()
