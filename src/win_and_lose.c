/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** win_and_lose.c
*/
#include "../include/hangman.h"

int win_lose(hangman_t *hangman)
{
    if (hangman->tries == 0) {
        printf("You lost!\n");
        return 1;
    }
    if (my_strcmp(hangman->word, hangman->masked_word) == 0) {
        printf("Congratulations!\n");
        return 1;
    }
    return 0;
}
