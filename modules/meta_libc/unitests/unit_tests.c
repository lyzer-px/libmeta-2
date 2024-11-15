/*
** EPITECH PROJECT, 2024
** meta_libc [WSL: Ubuntu]
** File description:
** unit_tests.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "meta_libc.h"

#define HELLO_WORLD_LEN 11

void redirect_all_std(void)
{
    cr_redirect_stderr();
    cr_redirect_stdout();
}

Test(meta_atonbr, ret)
{
    cr_assert_eq(meta_atoi("dfghkjkk+++++-42"), -42);
    cr_assert_eq(meta_atoi("dfghkjkk+++++42"), 42);
    cr_assert_eq(meta_atol("dfghkjkk+++++-30000000"), -30000000);
    cr_assert_eq(meta_atol("dfghkjkk+++++30000000"), 30000000);
    cr_assert_eq(meta_atoll("dfghkjkk+++++-300000000"), -300000000);
    cr_assert_eq(meta_atoll("dfghkjkk+++++300000000"), 300000000);
}

Test(meta_mprintf, s_flag, .init=redirect_all_std)
{
    meta_mprintf("%s", "Hello World");
    cr_assert_stdout_eq_str("Hello World");
}


Test(meta_mprintf, s_flag2, .init=redirect_all_std)
{
    meta_mprintf("Hello %s", "World");
    cr_assert_stdout_eq_str("Hello World");
}

Test(meta_mprintf, c_flag, .init=redirect_all_std)
{
    cr_assert_eq(meta_mprintf("%c", 'c'), 1);
    cr_assert_stdout_eq_str("c");
}

Test(meta_mprintf, d_flag, .init=redirect_all_std)
{
    meta_mprintf("Hey, I'm %d", 19);
    cr_assert_stdout_eq_str("Hey, I'm 19");
}

Test(meta_puterr, print, .init=redirect_all_std)
{
    cr_assert_eq(meta_puterr("Hey, I'm 19"), HELLO_WORLD_LEN);
    cr_assert_stderr_eq_str("Hey, I'm 19");
}

Test(meta_strcat, concat)
{
    char *buff = malloc(sizeof(char) * HELLO_WORLD_LEN + 1);

    buff = strcpy(buff, "Hello");
    buff = meta_strcat(buff, " World");
    cr_assert_str_eq(buff, "Hello World");
}

Test(meta_strdup, print)
{
    char *str = meta_strdup("Hello World");

    cr_assert_str_eq(str, "Hello World");
    free(str);
}

Test(meta_strndup, print)
{
    char *str = meta_strndup("Hello World", 5);

    cr_assert_str_eq(str, "Hello");
    free(str);
}

Test(meta_strcmp, print)
{
    cr_assert_eq(meta_strcmp("hi", "hi"), 0);
    cr_assert_neq(meta_strcmp("yi", "hi"), 0);
}

Test(meta_strncmp, print)
{
    cr_assert_eq(meta_strncmp("hi", "hi", 1), 0);
    cr_assert_eq(meta_strncmp("Hello World", "Hello ", 6), 0);
    cr_assert_neq(meta_strncmp("yi", "hi", 1), 0);
}

Test(meta_strcat, print)
{
    char buff[11] = "Hello ";
    char cat[] = "World";
    char *cated = meta_strcat(buff, cat);

    cr_assert_str_eq(cated, "Hello World");
}

Test(meta_strncat, print)
{
    char buff[11] = "Hello ";
    char cat[] = "World";
    char *cated = meta_strncat(buff, cat, 3);

    cr_assert_str_eq(cated, "Hello Wor");
}

Test(meta_strstr, print)
{
    cr_assert_str_eq(meta_strstr("Hello World", "Wo"), "World");
}