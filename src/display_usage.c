/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** display_usage.c
*/
#include "../include/hangman.h"

void display_usage(char **argv)
{
    printf("USAGE:\n\t%s filename [tries]\n", argv[0]);
    printf("DESCRIPTION:\n\tfilename\tfile containing the words\n");
    printf("OPTION:\n\ttries\t\tnumber of tries\n");
}
