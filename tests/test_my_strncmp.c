/*
** EPITECH PROJECT, 2022
** test_strncmp.c
** File description:
** day6
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, compare_n_carc_of_two_string1)
{
    char str1[100] = "HelloEpitech";
    char str2[100] = "HelloEpitech";
    cr_assert(my_strncmp(str1, str2, 5) == 0);
}

Test(my_strncmp, compare_n_carc_of_two_string2)
{
    char str1[100] = "HelloEpitech";
    char str2[100] = "HellaEpitech";
    cr_assert(my_strncmp(str1, str2, 5) == 14);
}

Test(my_strncmp, compare_n_carc_of_two_string3)
{
    char str1[100] = "HellaEpitech";
    char str2[100] = "HelloEpitech";
    cr_assert(my_strncmp(str1, str2, 5) == -14);
}

Test(my_strncmp, compare_n_carc_of_two_string4)
{
    char str1[100] = "HelloEpitech";
    char str2[100] = "HelloEpitech";
    cr_assert(my_strncmp(str1, str2, 0) == 0);
}

Test(my_strncmp, compare_n_carc_of_two_string5)
{
    char str1[100] = "HelloEpitech";
    char str2[100] = "HelloEpitech";
    cr_assert(my_strncmp(str1, str2, 3) == 0);
}
