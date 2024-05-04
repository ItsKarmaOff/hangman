/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** display.c
*/
#include "../include/hangman.h"

static void prompt(hangman_t *hangman)
{
    printf("%s\n", hangman->masked_word);
    printf("Tries: %d\n\n", hangman->tries);
}

void display(hangman_t *hangman)
{
    char *input = NULL;
    size_t size = 0;

    prompt(hangman);
    printf("Your letter: ");
    while (getline(&input, &size, stdin)) {
        hangman->letter = input[0];
        cmp_words(hangman);
        if (!hangman->is_find)
            printf("\n%c: is not in this word\n", hangman->letter);
        prompt(hangman);
        if (win_lose(hangman))
            return;
        printf("Your letter: ");
    }
}
