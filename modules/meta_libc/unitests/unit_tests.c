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

Test(meta_mprintf, s_flag, .init=redirect_all_std)
{
    cr_assert_eq(meta_mprintf("%s", "Hello World"), HELLO_WORLD_LEN);
    cr_assert_stdout_eq_str("Hello World");
    cr_assert_eq(meta_mprintf("Hello %s", "World"), HELLO_WORLD_LEN);
    cr_assert_stdout_eq_str("Hello World");

}

Test(meta_mprintf, c_flag, .init=redirect_all_std)
{
    cr_assert_eq(meta_mprintf("%c", 'c'), 1);
    cr_assert_stdout_eq_str("c");
}

Test(meta_mprintf, d_flag, .init=redirect_all_std)
{
    cr_assert_eq(meta_mprintf("Hey, I'm %d", 19), HELLO_WORLD_LEN);
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

Test(meta_atonbr, ret)
{
    cr_assert_eq(meta_atoi("dfghkjkk+++++-42"), -42);
    cr_assert_eq(meta_atoi("dfghkjkk+++++42"), 42);
    cr_assert_eq(meta_atol("dfghkjkk+++++-30000000"), -30000000);
    cr_assert_eq(meta_atol("dfghkjkk+++++30000000"), 30000000);
    cr_assert_eq(meta_atoll("dfghkjkk+++++-300000000"), -300000000);
    cr_assert_eq(meta_atoll("dfghkjkk+++++300000000"), 300000000);
}