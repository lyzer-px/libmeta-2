/*
** EPITECH PROJECT, 2025
** libmeta
** File description:
** wrapper.h
*/

#include <meta/utils.h>
#include <unistd.h>
#include "meta/libc/string.h"

char *apx_env_fetch(char **env, char *token)
{
    for (size_t i = 0; env[i] != nullptr; i++)
        if (META_STR_CONTAINS(env[i], token))
            return env[i];
    return nullptr;
}