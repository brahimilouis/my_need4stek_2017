/*
** EPITECH PROJECT, 2018
** cmd
** File description:
** cmd
*/

#include "n4s.h"

int	send_command(char *str)
{
	write(1, str, strlen(str));
	str = get_next_line(0);
	return (0);
}

int	send_command_turn(float angle, char *str)
{
	write(1, "wheels_dir:", 11);
	if (angle < 0.0)
		write(1, "-", 1);
	write(1, str, strlen(str));
	str = get_next_line(0);
	return (0);
}
