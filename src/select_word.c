/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** set_random_word.c
*/
#include "../include/hangman.h"

void select_word(char **array, hangman_t *hangman)
{
    size_t len;
    int nb_words = my_arraylen(array);
    int word_selected = rand() % nb_words;
    hangman->word = my_strdup(array[word_selected]);
    if (hangman->word == NULL)
        return;
    len = my_strlen(hangman->word);
    hangman->masked_word = calloc(len + 1, sizeof(char));
    if (hangman->masked_word == NULL)
        return;
    for (size_t i = 0; i < len; i++)
        hangman->masked_word[i] = '*';
    display(hangman);
}
