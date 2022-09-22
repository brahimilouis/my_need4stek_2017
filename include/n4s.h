/*
** EPITECH PROJECT, 2018
** include
** File description:
** include
*/

#ifndef __N4S_h__
# define __N4S_h__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

# define SIZE_BUFFER 1

# define SPEED_1500 "car_forward:0.9\n"
# define SPEED_1000 "car_forward:0.6\n"
# define SPEED_600 "car_forward:0.5\n"
# define SPEED_400 "car_forward:0.4\n"
# define SPEED_SLOW "car_forward:0.07\n"

# define TURN_1500 "0.075\n"
# define TURN_1000 "0.1\n"
# define TURN_600 "0.2\n"
# define TURN_400 "0.3\n"
# define TURN_200 "0.4\n"
# define TURN_SHORT "0.5\n"

int	send_command(char *str);
void	ia(void);
void	dir_car(float angle, char **lidar);
int	send_command_turn(float angle, char *str);
int	check_end(char *str);
char	*get_next_line(int fd);
char	**my_str_to_word_array(char const *str, char lim);

#endif
