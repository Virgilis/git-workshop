/*
** EPITECH PROJECT, 2023
** task01my_putstr
** File description:
** Task 02 day 04
*/

int my_putstr(char  const  *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return 0;
}
