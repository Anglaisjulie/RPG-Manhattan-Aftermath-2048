/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** putstr
*/

#include "warlock.h"

/*
\fn void my_putstr(char *str)
\brief print a string to stantard output.
\param str : the string to print.
\return 0.
*/

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
