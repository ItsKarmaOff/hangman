/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** hangman.c
*/
#include "../include/hangman.h"

void hangman(char **argv)
{
    hangman_t *hangman = struct_init(argv);

    open_file(argv, hangman);
    free_struct(hangman);
}
