/*
** EPITECH PROJECT, 2022
** test_revstr
** File description:
** day6
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

int my_strlen(char *str);

Test(my_revstr, return_value_is_reversed)
{
    char str1[] = "Hello";
    char str2[] = "olleH";
    
    my_revstr(str1);
    cr_assert_str_eq(str1, str2);
}
