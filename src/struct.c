/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** struct.c
*/
#include "../include/hangman.h"

hangman_t *struct_init(char **argv)
{
    hangman_t *hangman = malloc(sizeof(hangman_t));

    if (hangman == NULL) {
        my_putstr_error("Error: malloc failed\n");
        return NULL;
    }
    if (argv[2] == NULL)
        hangman->tries = 10;
    else
        hangman->tries = my_getnbr(argv[2]);
    hangman->is_find = 1;
    hangman->word = NULL;
    hangman->masked_word = NULL;
    return hangman;
}

void free_struct(hangman_t *hangman)
{
    if (hangman->word != NULL)
        free(hangman->word);
    if (hangman->masked_word != NULL)
        free(hangman->masked_word);
    free(hangman);
}
