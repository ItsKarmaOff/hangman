/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** main.c
*/
#include "../include/hangman.h"

static void display_usage(char **argv)
{
    printf("USAGE:\n\t%s FILE [tries]\n", argv[0]);
    printf("DESCRIPTION:\n\tFILE\tfile containing the words\n");
    printf("OPTION:\n\ttries\tnumber of tries\n");
}

int main(int argc, char **argv)
{
    if (argc < 2 || argc > 3) {
        display_usage(argv);
        return 84;
    } else if (my_strcmp(argv[1], "-h") == 0 || my_strcmp(argv[1], "--help") == 0) {
        display_usage(argv);
        return 0;
    } else {
        hangman(argv);
        return 0;
    }
}
