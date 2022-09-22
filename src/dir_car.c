/*
** EPITECH PROJECT, 2018
** cmd
** File description:
** cmd
*/

#include "n4s.h"

int	check_end(char *str)
{
	char *tpmp;

	if (str == NULL)
		return (0);
	if ((tpmp = strstr(str, "Track Cleared")) != NULL)
		if (strncmp(tpmp, "Track Cleared", 13) == 0)
			return (1);
	return (0);
}

int	move_car(float angle)
{
	if (angle >= 1500)
		return (send_command(SPEED_1500));
	if (angle >= 1000)
		return (send_command(SPEED_1000));
	if (angle >= 600)
		return (send_command(SPEED_600));
	if (angle >= 400)
		return (send_command(SPEED_400));
	return (send_command(SPEED_SLOW));
}

int	turn_car(float angle, char **lidar)
{
	float	left_right = atof(lidar[3]) - atof(lidar[33]);

	if (angle >= 1500)
		return (send_command_turn(left_right, TURN_1500));
	if (angle >= 1000)
		return (send_command_turn(left_right, TURN_1000));
	if (angle >= 600)
		return (send_command_turn(left_right, TURN_600));
	if (angle >= 400)
		return (send_command_turn(left_right, TURN_400));
	if (angle >= 200)
		return (send_command_turn(left_right, TURN_200));
	return (send_command_turn(left_right, TURN_SHORT));
}

void	dir_car(float angle, char **lidar)
{
	move_car(angle);
	turn_car(angle, lidar);
}
