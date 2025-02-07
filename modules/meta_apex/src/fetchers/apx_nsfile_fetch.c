/*
** EPITECH PROJECT, 2025
** libmeta
** File description:
** wrapper.h
*/

#include <unistd.h>
#include <stdio.h>
#include "meta/libc/string.h"
#include "meta/apex/defs.h"

char *apx_nsfile_fetch(char *filepath, char *token)
{
    char *buff = nullptr;
    size_t len = 0;
    FILE *file = fopen(filepath, APX_RDONLY);

    while (getline(&buff, &len, file) != APX_FILEEND)
        if (META_STR_CONTAINS(buff, token)) {
            fclose(file);
            return buff;
        }
    fclose(file);
    return nullptr;
}
