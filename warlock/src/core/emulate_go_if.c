/*
** EPITECH PROJECT, 2020
** warlock-C-libraries
** File description:
** emulate_go_if
*/

#include "warlock.h"

int emulate_else_if(int *pass, int true_condition)
{
    *pass += 1;
    if (true_condition == 1)
        return (1);
    else
        return (0);
}