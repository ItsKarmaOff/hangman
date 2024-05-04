/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** cmp_words.c
*/
#include "../include/hangman.h"

void cmp_words(hangman_t *hangman)
{
    hangman->is_find = 0;
    for (int i = 0; i < my_strlen(hangman->word); i++) {
        if (hangman->letter == hangman->word[i]) {
            hangman->masked_word[i] = hangman->word[i];
            hangman->is_find = 1;
        }
    }
    if (hangman->is_find == 0)
        hangman->tries--;
}
