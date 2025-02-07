/*
** EPITECH PROJECT, 2025
** libmeta
** File description:
** wrapper.h
*/

#include <unistd.h>
#include "meta/utils.h"
#include "meta/libc/string.h"

char *apx_env_fetch(char **env, char *token)
{
    for (size_t i = 0; env[i] != nullptr; i++)
        BREAKPOINT(META_STR_CONTAINS(env[i], env[i]));
    return nullptr;
}