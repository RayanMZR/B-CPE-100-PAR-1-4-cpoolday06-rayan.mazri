/*
** EPITECH PROJECT, 2022
** test_strstr
** File description:
** day6
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);
char *my_strcpy(char *dest, char const *src);

Test(my_strstr, find_str_in_old_str1)
{
    char str[256] = {0};
    char to_find[256] = {0};
    char *value;
    
    my_strcpy(str, "bonjour les amis");
    my_strcpy(to_find, "les amis");
    value = my_strstr(str, to_find);
    cr_assert_str_eq(value, "les");
}

Test(my_strstr, find_str_in_old_str2)
{
    char str[256] = {0};
    char to_find[256] = {0};
    char *value;

    my_strcpy(str, "bonjour les amis");
    my_strcpy(to_find, "amis");
    value = my_strstr(str, to_find);
    cr_assert_str_eq(value, "amis");
}

Test(my_strstr, find_str_in_old_str3)
{
    char str[256] = {0};
    char to_find[256] = {0};
    char *value;

    my_strcpy(str, "salut les amis à Epitech");
    my_strcpy(to_find, "");
    value = my_strstr(str, to_find);
    cr_assert_str_eq(value, "salut les amis à Epitech");
}

Test(my_strstr, find_str_in_old_str4)
{
    char str[256] = {0};
    char to_find[256] = {0};
    char *value;

    my_strcpy(str, "bonjour les amis comment aller vous");
    my_strcpy(to_find, "toto");
    value = my_strstr(str, to_find);
    cr_assert_null(value);
}

Test(my_strstr, find_str_in_old_str5)
{
    char str[256] = {0};
    char to_find[256] = {0};
    char *value;

    my_strcpy(str, "bonjour le amis");
    my_strcpy(to_find, "le");
    value = my_strstr(str, to_find);
    cr_assert_str_eq(value, "le amis");
}
