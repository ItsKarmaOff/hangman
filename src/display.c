/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** display.c
*/
#include "../include/hangman.h"

static void cmp_words(hangman_t *hangman)
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

static int win_lose(hangman_t *hangman)
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

static void prompt(hangman_t *hangman)
{
    printf("%s\n", hangman->masked_word);
    printf("Tries: %d\n\n", hangman->tries);
}

void display(hangman_t *hangman)
{
    char *input = NULL;
    size_t size = 0;

    printf("%s\n", hangman->masked_word);
    printf("Tries: %d\n\n", hangman->tries);
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
