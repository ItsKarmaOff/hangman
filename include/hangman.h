/*
** EPITECH PROJECT, 2024
** hangman
** File description:
** hangman.h
*/
#ifndef TESTS_HANGMAN_H
    #define TESTS_HANGMAN_H

    #include "my.h"
    #include "myprintf.h"

typedef struct hangman_s {
    int tries;
    int is_find;
    char *word;
    char *masked_word;
    char letter;
} hangman_t;

hangman_t *struct_init(char **argv);
void free_struct(hangman_t *hangman);

void hangman(char **argv);
void open_file(char **argv, hangman_t *hangman);
void read_file(int fd, struct stat st, hangman_t *hangman);
void select_word(char **array, hangman_t *hangman);
void display(hangman_t *hangman);

#endif //TESTS_HANGMAN_H
