/*
** EPITECH PROJECT, 2019
** letter.c
** File description:
** letter
*/

#include "warlock.h"

char *empty_string(char *str)
{
    if (DEBUG_MODE == 1)
        debug_log("empty_string()", str);
    if (!str)
        return (NULL);
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = '\0';
    return (str);
}

char *insert(char *str, char pushed)
{
    char *increased = NULL;
    int i;

    if (DEBUG_MODE == 1)
        debug_log("insert()", str);
    if (!str)
        return (NULL);
    increased = malloc(sizeof(char) * (my_strlen(str) + 2));
    if (!increased)
        return (NULL);
    increased[0] = pushed;
    for (i = 0; str[i] != '\0'; i++)
        increased[i + 1] = str[i];
    increased[i + 1] = '\0';
    free(str);
    return (increased);
}

char *capitalize(char *str)
{
    if (DEBUG_MODE == 1)
        debug_log("capitalize()", str);
    if (!str)
        return NULL;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    return (str);
}
