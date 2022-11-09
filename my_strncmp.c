/*
** EPITECH PROJECT, 2022
** strncmp
** File description:
** day6
*/

int my_strncmp(char const *s1 ,char const *s2, int n)
{
    int i;
    for (i = 0; s1[i] == s2[i] && i < n; i++);
    if (i == n)
        return 0;
    if (s1[i] > s2[i])
        return (s1[i] - s2[i]);
    if (s1[i] < s2[i])
        return (s1[i] - s2[i]);
    return 0;
}
