/*
** EPITECH PROJECT, 2018
** cmd
** File description:
** cmd
*/

#include "n4s.h"

void	ia(void)
{
	float	angle;
	char	**lidar;
	char	*str = NULL;

	while (check_end(str) == 0) {
		write(1, "get_info_lidar\n", 15);
		str = get_next_line(0);
		if (str == NULL)
			return;
		lidar = my_str_to_word_array(str, ':');
		angle = atof(lidar[17]);
		dir_car(angle, lidar);
	}
	send_command("CAR_FORWARD:0.0\n");
	send_command("WHEELS_DIR:0.0\n");
	sleep(2);
	send_command("STOP_SIMULATION\n");
	sleep(2);
	exit(0);
}
