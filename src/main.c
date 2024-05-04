/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** main.c
*/
#include "../include/hangman.h"

int main(int argc, char **argv)
{
    if (argc < 2 || argc > 3) {
        display_usage(argv);
        return 84;
    }
    if (my_strcmp(argv[1], "-h") == 0 || my_strcmp(argv[1], "--help") == 0) {
        display_usage(argv);
        return 0;
    } else {
        hangman(argv);
        return 0;
    }
}
