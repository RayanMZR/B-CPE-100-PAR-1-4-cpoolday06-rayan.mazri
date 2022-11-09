/*
** EPITECH PROJECT, 2022
** test_strcapitalize
** File description:
** day6
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, maj_for_first_letter)
{
    char str[100] = "hey, how are you? 42WORds forty-two; fifty+one";
    my_strcapitalize(str);
    cr_assert_str_eq(str, "Hey, How Are You? 42words Forty-Two; Fifty+One");
}
